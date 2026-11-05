# Reconstruction notes

## TIMER3_COMPA input debounce

Reference range: flash bytes `0x0c10` through `0x0c5b` (76 bytes), displayed
by Ghidra as `code:0608` through `code:062d`.

The interrupt performs the following operations:

1. Read `PINB` and mask it to bits 0 through 4.
2. Compare the sample with the candidate value at SRAM `0x0128`.
3. On change, store the sample at `0x0128` and set SRAM `0x0109` to 10.
4. If the counter at `0x0109` is nonzero, decrement it.
5. When the counter reaches zero, copy the candidate from `0x0128` to the
   stable value at SRAM `0x0127`.

The behavioral reconstruction is `src/debounced_inputs.c`:

| Original SRAM | Provisional C name |
| --- | --- |
| `0x0109` | `input_debounce_ticks` |
| `0x0127` | `input_sample_stable` |
| `0x0128` | `input_sample_candidate` |

The electrical meaning of `PINB[4:0]` remains unknown. The names describe
observed behavior without assuming whether these are switches, straps, or
another parallel input.

Compiled with AVR GCC 16.2 and `-Os`, the reconstructed ISR is also 76 bytes.
Its register-save prologue differs from the reference because the compiler
version and code-generation conventions differ; the functional instruction
sequence matches.

## USB enumeration candidate

The original descriptor objects were recovered directly from flash and are
generated into `src/usb_descriptors.c`. Their reference ranges are:

| Object | Original flash byte | Length |
| --- | ---: | ---: |
| Endpoint configuration table | `0x035d` | 15 |
| Device descriptor | `0x036c` | 18 |
| Configuration descriptor | `0x037e` | 116 |
| HID report 0 | `0x03f2` | 18 |
| HID report 1 | `0x0404` | 21 |
| HID report 2 | `0x0419` | 220 |
| HID report 3 | `0x04f5` | 28 |
| Language string | `0x0511` | 4 |
| Manufacturer string | `0x0515` | 14 |
| Product string | `0x0525` | 56 |

`scripts/validate_build.py` locates the corresponding symbols in the linked
ELF and compares their compiled bytes with these ranges. It also verifies that
ATmega32U4 vectors 10, 11, and 32 target `USB_GEN`, `USB_COM`, and
`TIMER3_COMPA` handlers respectively.

`src/usb.c` follows the recovered initialization values and endpoint table and
implements the control requests required for enumeration.

### Hardware result, 2026-11-05

The generated image was uploaded through a Caterina-compatible bootloader to
a Leonardo-compatible ATmega32U4 board. AVRDUDE wrote and read back all 2,258
bytes successfully. macOS then reported:

- product `Soarer's Keyboard Converter`, manufacturer `Soarer`;
- VID `16c0`, PID `047d`;
- USB full speed and a 32-byte endpoint zero;
- configuration 1 active;
- four HID interfaces numbered 0 through 3;
- endpoint counts `1, 1, 1, 2` for those interfaces.

This verifies enumeration and descriptor acceptance, but not general USB-stack
correctness. No bus trace, suspend/resume cycle, endpoint report transfer, or
keyboard-side behavior has yet been tested. macOS also exposed a
`kUSBFailedRemoteWake` property; remote-wakeup behavior remains unimplemented
and must be investigated before power-management support can be considered
complete.
