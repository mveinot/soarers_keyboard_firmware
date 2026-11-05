# Soarer AT2USB v1.12 reconstruction

This repository is a clean-room, behavioral reconstruction of Soarer's AT2USB
v1.12 keyboard-converter firmware for the ATmega32U4, based on the released
binary in `firmware/original.hex`. The goal is maintainable C that reproduces
the observed behavior—not a line-for-line recovery of lost source code.

> **Hardware-test status:** USB enumeration was verified on a Leonardo-
> compatible ATmega32U4 board on 2026-11-05. The image does not yet implement
> keyboard conversion. Do not treat it as a replacement for the original
> firmware or flash it to irreplaceable hardware.

The original source cannot be reproduced exactly from a release binary.
Function and variable names, comments, source-file boundaries, exact types,
and preprocessor structure have been lost. Generated decompiler output is
evidence for rewriting the firmware, not source suitable for maintenance.

## Verified image facts

- Target: ATmega32U4 (AVR8, `avr5` instruction set)
- Intel HEX records: 902 (901 data, one EOF)
- Checksum failures: none
- Flash range: `0x0000` through `0x384d`
- Image size: 14,414 bytes
- HEX SHA-256: `40cd629f6f31a166508c4917420b407215718a045536cfb6d813a9c1a02325a8`
- Binary SHA-256: `6c1cca75391f546378b7f443d940c9b78e35ceda70a31caef8582300bc9a09c4`
- No EEPROM image, fuse values, or bootloader image are present.

The reset vector targets byte address `0x0626`. Most unused interrupt vectors
target `0x065e`; distinct handlers are initially visible at `0x0c10`, `0x1244`,
`0x12c4`, `0x15ae`, `0x1b0c`, `0x1d60`, and `0x298c`.

## Workspace layout

- `firmware/original.hex`: immutable release artifact
- `firmware/original.bin`: raw flash bytes extracted from the HEX file
- `analysis/reference-disassembly.lst`: linear GNU binutils disassembly
- `analysis/functions.tsv`: Ghidra-discovered function inventory
- `analysis/ghidra-decompilation.c`: machine-generated analysis evidence
- `scripts/ExportFirmwareAnalysis.java`: repeatable Ghidra export script
- `scripts/validate_build.py`: generated-HEX, vector, and recovered-data checks
- `src/`, `include/`: maintainable reconstructed modules
- `tests/`: native behavioral tests for hardware-independent protocol logic
- `ghidra/SoarerV112Corrected*`: active Ghidra analysis project
- `ghidra/SoarerV112*`: earlier analysis project retained for comparison

## Building and validating

The build requires AVR GCC, AVR libc, and AVR binutils in `PATH`:

```sh
make clean all
make test
make size
make validate
```

The candidate output is `build/soarer-reconstruction.hex`. Validation checks
all Intel HEX checksums and bounds, the USB interrupt and timer vector targets,
and byte-for-byte equality of the recovered endpoint table and all nine USB
descriptor objects against the original binary.

The current PS/2 diagnostic image occupies 4,064 programmed bytes. That small
size reflects its limited scope; it is not evidence that the original
14,414-byte firmware has been fully recovered.

## Analysis model

Ghidra imports the raw binary at address zero with language
`avr8:LE:16:default` and compiler specification `gcc`. The ATmega32U4 uses
word-addressed program memory, while addresses in this workspace and GNU
disassembly are written as byte addresses unless explicitly stated otherwise.
Ghidra's UI renders program addresses in words; its scripting API still accepts
byte offsets, so analysis scripts must convert between the two deliberately.

## Reconstruction plan

1. Separate executable regions from lookup tables and descriptors.
2. Label all interrupt vectors and ATmega32U4 I/O registers.
3. Identify compiler runtime helpers and exclude them from behavioral work.
4. Recover USB descriptors, endpoint setup, and HID report handling.
5. Recover AT/PS2 and XT keyboard receive/transmit state machines.
6. Recover scan-code translation, layers, remaps, macros, and configuration.
7. Rewrite each subsystem as typed C with explicit hardware abstractions.
8. Build with `avr-gcc`, add host-side tests, and compare generated behavior
   against the reference firmware.

Do not edit generated analysis files to make them look like source. Names and
types established during analysis should instead be recorded in the Ghidra
project and implemented cleanly under `src/` and `include/`.

## First reconstructed subsystem

`src/debounced_inputs.c` reconstructs the `TIMER3_COMPA` interrupt at byte
address `0x0c10`. It samples the low five bits of `PINB`, starts a ten-tick
debounce interval whenever the candidate value changes, and publishes the
candidate after the interval expires. The electrical meaning of those five
inputs is not yet known, so its public names are explicitly provisional.

## USB enumeration milestone

The following pieces are now implemented:

- the original VID `16c0`, PID `047d`, manufacturer, and product descriptors;
- all four original HID interfaces, their report descriptors, and five
  endpoint definitions;
- USB clock/PLL initialization and attach sequence;
- endpoint-zero reset and setup handling;
- standard requests needed for enumeration and basic HID class requests;
- exact original endpoint configuration bytes for endpoints 1 through 5.

The image was uploaded through a Caterina-compatible bootloader and all 2,258
bytes were verified by AVRDUDE. macOS enumerated it at full speed as
`Soarer's Keyboard Converter`, VID `16c0`, PID `047d`, with a 32-byte endpoint
zero. All four interfaces were accepted as HID interfaces; their endpoint
counts were `1, 1, 1, 2`, matching the recovered configuration descriptor.

No keyboard-side signaling, HID report traffic, suspend/resume behavior, or
configuration storage has been tested yet. Those subsystems still need to be
reconstructed before this can function as a keyboard converter.

## Keyboard protocol milestone

The keyboard electrical interface and receive framing have now been separated
from the decompiler output:

- `src/keyboard_bus.c` implements the confirmed open-collector `PD0` data and
  `PD1/INT1` clock interface plus microsecond Timer 1 timeouts;
- `src/keyboard_protocol.c` implements hardware-independent XT and AT/PS/2
  receive framing;
- `tests/test_keyboard_protocol.c` exercises valid XT and PS/2 frames, both
  odd-parity cases, start/parity/stop/clock/timeout errors, and complete PS/2
  host-transmit transactions;
- `analysis/keyboard-io.md` records the address-level evidence and recovered
  timing constants.

`src/keyboard_receive.c` now connects the decoders to `INT1` and
`TIMER1_COMPA`, provides an atomic single-event mailbox for the main loop, and
supports nonblocking AT/PS/2 host transmission. Structural validation checks
both new vectors in addition to the USB and debounce vectors. The generated
candidate occupies 3,598 programmed bytes.

The earlier enumeration image kept keyboard initialization disabled. The raw
diagnostic image described below is the first candidate that deliberately
activates the keyboard clock interrupt and consumes its events in `main`.

## Raw keyboard diagnostic image

`main` now initializes the selected keyboard receiver, consumes its event
mailbox, and forwards startup, raw-byte, and framing-error records over the
32-byte vendor HID interface. PS/2 is the default; XT can be selected at build
time:

```sh
make clean all KEYBOARD_PROTOCOL=ps2
make clean all KEYBOARD_PROTOCOL=xt
```

The macOS diagnostic reader is built and run with:

```sh
make debug-reader
./build/read_keyboard_debug
```

macOS requires Input Monitoring permission for the terminal or application
running the reader. Without it, opening the HID interface fails with
`kIOReturnNotPermitted` (`0xe00002e2`).

### Hardware result, 2026-11-05

The diagnostic image was uploaded to a Pro Micro-style ATmega32U4 clone and
enumerated with all four recovered HID interfaces. The reader receives a
versioned heartbeat report every second:

```text
sequence=1 protocol=PS/2 event=heartbeat value=0x00
```

This verifies USB SOF timing, main-loop event consumption, endpoint 3 input
reports, and the macOS reader path. Non-control IN endpoints must release their
FIFO bank with the original firmware's `UEINTX = 0x3a` sequence; clearing only
`TXINI`, as endpoint zero does, leaves `FIFOCON` asserted and prevents reports
from reaching the host.
