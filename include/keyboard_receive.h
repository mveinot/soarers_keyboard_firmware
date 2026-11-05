#ifndef SOARER_KEYBOARD_RECEIVE_H
#define SOARER_KEYBOARD_RECEIVE_H

#include <stdbool.h>
#include <stdint.h>

typedef enum {
    KEYBOARD_PROTOCOL_PS2,
    KEYBOARD_PROTOCOL_XT,
} keyboard_protocol_t;

typedef enum {
    KEYBOARD_EVENT_NONE,
    KEYBOARD_EVENT_BYTE,
    KEYBOARD_EVENT_CLOCK_PHASE_ERROR,
    KEYBOARD_EVENT_TIMEOUT,
    KEYBOARD_EVENT_START_BIT_ERROR,
    KEYBOARD_EVENT_PARITY_ERROR,
    KEYBOARD_EVENT_STOP_BIT_ERROR,
    KEYBOARD_EVENT_TRANSMIT_COMPLETE,
    KEYBOARD_EVENT_TRANSMIT_NOT_ACKNOWLEDGED,
} keyboard_event_type_t;

typedef struct {
    keyboard_event_type_t type;
    uint8_t value;
} keyboard_event_t;

/*
 * Configure the keyboard bus and enable its receive interrupts. This is not
 * called by main yet; integration remains an explicit test milestone.
 */
void keyboard_receive_initialize(keyboard_protocol_t protocol);
void keyboard_receive_disable(void);

/* Atomically consume the single-event mailbox shared with the ISRs. */
bool keyboard_receive_take_event(keyboard_event_t *event);

/* Begin a nonblocking host-to-keyboard transaction in PS/2 mode. */
bool keyboard_ps2_begin_transmit(uint8_t value);

#endif
