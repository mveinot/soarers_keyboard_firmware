#!/usr/bin/env python3
"""Perform structural checks on the reconstructed firmware build."""

from __future__ import annotations

import argparse
import pathlib
import subprocess
import tempfile


REFERENCE_OBJECTS = {
    "endpoint_configurations": (0x035D, 15),
    "usb_device_descriptor": (0x036C, 18),
    "usb_configuration_descriptor": (0x037E, 116),
    "usb_report_descriptor_0": (0x03F2, 18),
    "usb_report_descriptor_1": (0x0404, 21),
    "usb_report_descriptor_2": (0x0419, 220),
    "usb_report_descriptor_3": (0x04F5, 28),
    "usb_string_language": (0x0511, 4),
    "usb_string_manufacturer": (0x0515, 14),
    "usb_string_product": (0x0525, 56),
}

EXPECTED_VECTORS = {
    2: "__vector_2",    # INT1
    10: "__vector_10",  # USB_GEN
    11: "__vector_11",  # USB_COM
    17: "__vector_17",  # TIMER1_COMPA
    32: "__vector_32",  # TIMER3_COMPA
}


def parse_ihex(path: pathlib.Path) -> tuple[dict[int, int], int]:
    image: dict[int, int] = {}
    upper = 0
    records = 0
    saw_eof = False
    for line_number, raw in enumerate(path.read_text().splitlines(), 1):
        if not raw.startswith(":"):
            raise ValueError(f"{path}:{line_number}: not an Intel HEX record")
        record = bytes.fromhex(raw[1:])
        if len(record) < 5 or record[0] + 5 != len(record):
            raise ValueError(f"{path}:{line_number}: invalid record length")
        if sum(record) & 0xFF:
            raise ValueError(f"{path}:{line_number}: checksum failure")
        count = record[0]
        address = int.from_bytes(record[1:3], "big")
        kind = record[3]
        data = record[4 : 4 + count]
        records += 1
        if kind == 0:
            absolute = upper + address
            for offset, byte in enumerate(data):
                image[absolute + offset] = byte
        elif kind == 1:
            saw_eof = True
        elif kind == 2:
            upper = int.from_bytes(data, "big") << 4
        elif kind == 4:
            upper = int.from_bytes(data, "big") << 16
    if not saw_eof:
        raise ValueError(f"{path}: missing EOF record")
    return image, records


def symbols(elf: pathlib.Path) -> dict[str, tuple[int, int]]:
    output = subprocess.check_output(["avr-nm", "-n", "-S", str(elf)], text=True)
    result: dict[str, tuple[int, int]] = {}
    for line in output.splitlines():
        fields = line.split()
        if len(fields) == 4:
            address, size, _kind, name = fields
            result[name] = (int(address, 16), int(size, 16))
    return result


def flash_binary(elf: pathlib.Path) -> bytes:
    with tempfile.TemporaryDirectory() as directory:
        output = pathlib.Path(directory) / "flash.bin"
        subprocess.run(
            ["avr-objcopy", "-O", "binary", "-j", ".text", str(elf), str(output)],
            check=True,
        )
        return output.read_bytes()


def check_vectors(flash: bytes, syms: dict[str, tuple[int, int]]) -> None:
    for vector, name in EXPECTED_VECTORS.items():
        offset = vector * 4
        opcode = int.from_bytes(flash[offset : offset + 2], "little")
        if opcode != 0x940C:
            raise ValueError(f"vector {vector}: expected a JMP instruction")
        # The ATmega32U4 has fewer than 64K program words, so the address bits
        # embedded in the first JMP word are zero and word two is the target.
        target_word = int.from_bytes(flash[offset + 2 : offset + 4], "little")
        target_byte = target_word * 2
        expected = syms[name][0]
        if target_byte != expected:
            raise ValueError(
                f"vector {vector}: targets 0x{target_byte:04x}, expected {name} at 0x{expected:04x}"
            )


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("elf", type=pathlib.Path)
    parser.add_argument("hex", type=pathlib.Path)
    parser.add_argument("reference", type=pathlib.Path)
    args = parser.parse_args()

    built_image, records = parse_ihex(args.hex)
    if not built_image:
        raise ValueError("generated HEX contains no data")
    if max(built_image) >= 0x8000:
        raise ValueError("generated image exceeds ATmega32U4 application flash")

    syms = symbols(args.elf)
    flash = flash_binary(args.elf)
    reference = args.reference.read_bytes()

    for name, (reference_offset, length) in REFERENCE_OBJECTS.items():
        if name not in syms:
            raise ValueError(f"missing ELF symbol: {name}")
        address, symbol_size = syms[name]
        if symbol_size != length:
            raise ValueError(f"{name}: size {symbol_size}, expected {length}")
        actual = flash[address : address + length]
        expected = reference[reference_offset : reference_offset + length]
        if actual != expected:
            raise ValueError(f"{name}: bytes differ from original firmware")

    check_vectors(flash, syms)
    print(
        f"validated {records} HEX records, {len(built_image)} programmed bytes, "
        f"{len(REFERENCE_OBJECTS)} recovered objects, and {len(EXPECTED_VECTORS)} vectors"
    )


if __name__ == "__main__":
    main()
