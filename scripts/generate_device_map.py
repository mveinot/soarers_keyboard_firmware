#!/usr/bin/env python3
"""Generate ATmega32U4 SFR and interrupt maps for Ghidra."""

from __future__ import annotations

import argparse
import re
import subprocess
from pathlib import Path


def interrupt_names() -> dict[int, str]:
    output = subprocess.check_output(
        [
            "avr-gcc",
            "-mmcu=atmega32u4",
            "-dM",
            "-E",
            "-include",
            "avr/io.h",
            "-include",
            "avr/interrupt.h",
            "-x",
            "c",
            "/dev/null",
        ],
        text=True,
    )
    names = {0: "RESET_vect"}
    for line in output.splitlines():
        match = re.fullmatch(r"#define\s+(\w+)_vect_num\s+(\d+)", line)
        if match:
            names[int(match.group(2))] = f"{match.group(1)}_vect"
    return names


def register_definitions(header: Path) -> list[tuple[int, int, str]]:
    pattern = re.compile(
        r"#define\s+(\w+)\s+_SFR_(IO|MEM)(8|16)\(0x([0-9A-Fa-f]+)\)"
    )
    registers: list[tuple[int, int, str]] = []
    for line in header.read_text().splitlines():
        match = pattern.match(line)
        if not match:
            continue
        name, address_kind, width, raw_address = match.groups()
        address = int(raw_address, 16)
        if address_kind == "IO":
            address += 0x20
        registers.append((address, int(width), name))
    return sorted(registers)


def vector_target(image: bytes, vector_number: int) -> int:
    byte_address = vector_number * 4
    first_word = int.from_bytes(image[byte_address : byte_address + 2], "little")
    pc_word = byte_address // 2

    if first_word & 0xF000 == 0xC000:  # RJMP
        displacement = first_word & 0x0FFF
        if displacement & 0x0800:
            displacement -= 0x1000
        return (pc_word + 1 + displacement) & 0xFFFF

    if first_word & 0xFE0E == 0x940C:  # JMP
        second_word = int.from_bytes(image[byte_address + 2 : byte_address + 4], "little")
        high_bits = ((first_word & 0x01F0) << 13) | ((first_word & 0x0001) << 16)
        return high_bits | second_word

    raise ValueError(f"vector {vector_number} has unsupported opcode 0x{first_word:04x}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--header", type=Path, required=True)
    parser.add_argument("--binary", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()

    image = args.binary.read_bytes()
    names = interrupt_names()
    lines = ["kind\taddress\twidth_or_slot\tname\ttarget"]

    for address, width, name in register_definitions(args.header):
        lines.append(f"register\t0x{address:04x}\t{width}\t{name}\t-")

    for vector_number in range(43):
        name = names.get(vector_number, f"RESERVED_{vector_number}_vect")
        slot_word_address = vector_number * 2
        target_word_address = vector_target(image, vector_number)
        lines.append(
            f"vector\t0x{slot_word_address:04x}\t{vector_number}\t{name}"
            f"\t0x{target_word_address:04x}"
        )

    args.output.write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
