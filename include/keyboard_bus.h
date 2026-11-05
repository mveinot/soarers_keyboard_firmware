#ifndef SOARER_KEYBOARD_BUS_H
#define SOARER_KEYBOARD_BUS_H

#include <stdbool.h>
#include <stdint.h>

/*
 * Keyboard-side electrical interface recovered from the original firmware:
 *
 *   PD0       data, open collector
 *   PD1/INT1  clock, open collector and interrupt input
 *   TIMER1    protocol timeout/phase timer at 2 MHz
 *
 * A released line is an input with its internal pull-up enabled. An asserted
 * line is an output driven low. Neither line is ever actively driven high.
 */
void keyboard_bus_initialize(void);

bool keyboard_bus_data_is_high(void);
bool keyboard_bus_clock_is_high(void);
void keyboard_bus_release_data(void);
void keyboard_bus_assert_data(void);
void keyboard_bus_release_clock(void);
void keyboard_bus_assert_clock(void);

/* Schedule one TIMER1_COMPA interrupt after the requested microseconds. */
void keyboard_bus_schedule_timeout(uint16_t microseconds);
void keyboard_bus_cancel_timeout(void);

/* AT/PS2 observes both clock transitions; XT samples rising transitions. */
void keyboard_bus_interrupt_on_any_clock_change(void);
void keyboard_bus_interrupt_on_clock_rising(void);
void keyboard_bus_disable_clock_interrupt(void);

#endif
