# Keyboard-side I/O reconstruction

## Confirmed hardware mapping

The original firmware uses two pins for the keyboard bus:

| Signal | ATmega32U4 pin | Evidence |
| --- | --- | --- |
| Data | `PD0` | sampled throughout receive paths; driven by function at byte `0x0cf2` |
| Clock | `PD1/INT1` | external interrupt vector targets `0x1244`; driven by function at byte `0x0d02` |

Both lines use open-collector behavior. To release a line, the firmware clears
its DDR bit and enables the internal pull-up. To assert it, the firmware first
clears the PORT bit and then sets the DDR bit. It never drives either line
high. `src/keyboard_bus.c` preserves this ordering.

## Timer 1

The helper at original byte address `0x0c98`:

1. stops Timer 1 and disables compare A interrupts;
2. clears `TCNT1` and `OCF1A`;
3. doubles its 16-bit argument into `OCR1A`;
4. enables compare A and selects a `/8` prescaler.

At the firmware's 16 MHz CPU clock, Timer 1 therefore advances at 2 MHz and
the helper argument is a delay in microseconds. Recovered call sites use:

| Delay | Observed role |
| ---: | --- |
| 90 us | clock-phase/protocol detection |
| 120 us | XT frame completion delay |
| 200 us | AT/PS2 request-to-send phase |
| 1,000 us | clock-level detection timeout |
| 1,200 us | receive frame timeout |
| 10,000 us | host transmit timeout |

## Interrupt modes

The initialization routine at original byte `0x129a` releases clock and data,
puts Timer 1 in CTC mode, and configures `INT1` for any logical change. This is
used by the AT/PS/2 receive/transmit state machine, which checks clock level on
each transition.

The helper at original byte `0x0d4a` changes `INT1` to rising-edge mode. The
main protocol-selection path uses it when mode byte SRAM `0x0129` equals 2.
That mode dispatches to the simpler receiver at byte `0x0dd6`, identifying it
as the XT path.

## Receive state retained in the original image

The XT receiver at byte `0x0dd6` expects a low start bit, shifts eight data
bits LSB-first from `PD0`, and publishes the byte after a 120 us completion
timer. It has no parity or stop-bit validation.

The AT/PS/2 receiver at byte `0x1016` observes alternating clock levels and
validates a low start bit, eight LSB-first data bits, odd parity, and a high
stop bit. The adjacent state machine at byte `0x0e94` implements host-to-
keyboard transmission by inhibiting clock, asserting data, sending eight data
bits plus parity and stop, and checking the keyboard acknowledgement.

These state machines are implemented and connected to reconstructed interrupt
handlers, but startup does not enable the keyboard interface yet. Their live
electrical behavior therefore remains untested.

## Reconstructed runtime handoff

The original uses SRAM `0x012a` for a received byte and `0x012b` for a
single-event status. Function `0x13de` atomically snapshots and clears that
status for the main loop. Status 2 means a successfully received byte; other
observed values identify clock, timeout, start, parity, stop, or acknowledgement
failures.

`src/keyboard_receive.c` retains this single-mailbox architecture with typed
events. Its `INT1` handler advances the selected XT or PS/2 state machine, and
its `TIMER1_COMPA` handler resolves frame completion and timeouts. The same
interrupts advance nonblocking host-to-keyboard PS/2 transmission.

The reconstructed transmit sequence matches the state progression at original
byte `0x0e94`:

1. hold clock low for 200 us;
2. assert data before releasing clock;
3. shift eight data bits LSB-first;
4. send odd parity;
5. release data for the stop bit;
6. sample the keyboard's low acknowledgement;
7. abort and release both lines after 20 ms or any clock-phase error.

Native tests cover the protocol state machines. The AVR runtime is linked and
its vectors are statically validated, but `main` does not initialize the
keyboard interface yet, so this layer has not performed live electrical I/O.
