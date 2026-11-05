#include "keyboard_receive.h"

#include "keyboard_bus.h"
#include "keyboard_protocol.h"

#include <avr/interrupt.h>
#include <avr/io.h>

enum {
    XT_FRAME_TIMEOUT_US = 1200,
    XT_COMPLETION_DELAY_US = 120,
    PS2_FRAME_TIMEOUT_US = 1200,
};

static volatile keyboard_event_type_t mailbox_type;
static volatile uint8_t mailbox_value;
static keyboard_protocol_t active_protocol;
static xt_receiver_t xt_receiver;
static ps2_receiver_t ps2_receiver;
static ps2_transmitter_t ps2_transmitter;
static volatile bool transmit_active;

static keyboard_event_type_t event_from_result(keyboard_receive_result_t result)
{
    switch (result) {
    case KEYBOARD_RECEIVE_BYTE:
        return KEYBOARD_EVENT_BYTE;
    case KEYBOARD_RECEIVE_CLOCK_PHASE_ERROR:
        return KEYBOARD_EVENT_CLOCK_PHASE_ERROR;
    case KEYBOARD_RECEIVE_TIMEOUT:
        return KEYBOARD_EVENT_TIMEOUT;
    case KEYBOARD_RECEIVE_START_BIT_ERROR:
        return KEYBOARD_EVENT_START_BIT_ERROR;
    case KEYBOARD_RECEIVE_PARITY_ERROR:
        return KEYBOARD_EVENT_PARITY_ERROR;
    case KEYBOARD_RECEIVE_STOP_BIT_ERROR:
        return KEYBOARD_EVENT_STOP_BIT_ERROR;
    case KEYBOARD_RECEIVE_IN_PROGRESS:
    default:
        return KEYBOARD_EVENT_NONE;
    }
}

static void publish_result(keyboard_receive_result_t result, uint8_t value)
{
    const keyboard_event_type_t type = event_from_result(result);
    if (type != KEYBOARD_EVENT_NONE) {
        mailbox_value = value;
        mailbox_type = type;
    }
}

static void apply_transmitter_lines(void)
{
    /* Data must be asserted before releasing an inhibited clock. */
    if (ps2_transmitter.data_released) {
        keyboard_bus_release_data();
    }
    else {
        keyboard_bus_assert_data();
    }
    if (ps2_transmitter.clock_released) {
        keyboard_bus_release_clock();
    }
    else {
        keyboard_bus_assert_clock();
    }
}

static void finish_transmit(ps2_transmit_result_t result)
{
    keyboard_bus_cancel_timeout();
    apply_transmitter_lines();
    transmit_active = false;
    ps2_receiver_reset(&ps2_receiver);
    keyboard_bus_interrupt_on_any_clock_change();

    if (result == PS2_TRANSMIT_COMPLETE) {
        mailbox_value = 0;
        mailbox_type = KEYBOARD_EVENT_TRANSMIT_COMPLETE;
    }
    else if (result == PS2_TRANSMIT_NOT_ACKNOWLEDGED) {
        mailbox_value = 0;
        mailbox_type = KEYBOARD_EVENT_TRANSMIT_NOT_ACKNOWLEDGED;
    }
    else if (result == PS2_TRANSMIT_CLOCK_PHASE_ERROR) {
        mailbox_value = 0;
        mailbox_type = KEYBOARD_EVENT_CLOCK_PHASE_ERROR;
    }
    else {
        mailbox_value = 0;
        mailbox_type = KEYBOARD_EVENT_TIMEOUT;
    }
}

void keyboard_receive_initialize(keyboard_protocol_t protocol)
{
    const uint8_t saved_status = SREG;
    cli();

    active_protocol = protocol;
    mailbox_type = KEYBOARD_EVENT_NONE;
    mailbox_value = 0;
    xt_receiver_reset(&xt_receiver);
    ps2_receiver_reset(&ps2_receiver);
    transmit_active = false;
    keyboard_bus_initialize();
    if (protocol == KEYBOARD_PROTOCOL_XT) {
        keyboard_bus_interrupt_on_clock_rising();
    }

    SREG = saved_status;
}

bool keyboard_ps2_begin_transmit(uint8_t value)
{
    const uint8_t saved_status = SREG;
    cli();
    if (active_protocol != KEYBOARD_PROTOCOL_PS2 || transmit_active) {
        SREG = saved_status;
        return false;
    }

    keyboard_bus_disable_clock_interrupt();
    keyboard_bus_cancel_timeout();
    ps2_transmitter_start(&ps2_transmitter, value);
    transmit_active = true;
    apply_transmitter_lines();
    keyboard_bus_schedule_timeout(ps2_transmitter.timeout_us);
    SREG = saved_status;
    return true;
}

void keyboard_receive_disable(void)
{
    const uint8_t saved_status = SREG;
    cli();
    keyboard_bus_disable_clock_interrupt();
    keyboard_bus_cancel_timeout();
    SREG = saved_status;
}

bool keyboard_receive_take_event(keyboard_event_t *event)
{
    const uint8_t saved_status = SREG;
    cli();
    const keyboard_event_type_t type = mailbox_type;
    event->type = type;
    event->value = mailbox_value;
    mailbox_type = KEYBOARD_EVENT_NONE;
    SREG = saved_status;
    return type != KEYBOARD_EVENT_NONE;
}

ISR(INT1_vect)
{
    keyboard_receive_result_t result;
    uint8_t value;

    if (transmit_active) {
        const ps2_transmit_result_t transmit_result = ps2_transmitter_clock_changed(
            &ps2_transmitter,
            keyboard_bus_clock_is_high(),
            keyboard_bus_data_is_high());
        apply_transmitter_lines();
        if (transmit_result != PS2_TRANSMIT_IN_PROGRESS) {
            finish_transmit(transmit_result);
        }
        return;
    }

    if (active_protocol == KEYBOARD_PROTOCOL_XT) {
        result = xt_receiver_clock_rising(&xt_receiver, keyboard_bus_data_is_high());
        value = xt_receiver.value;
        if (result == KEYBOARD_RECEIVE_IN_PROGRESS) {
            if (xt_receiver.bit_count == 0) {
                keyboard_bus_schedule_timeout(XT_FRAME_TIMEOUT_US);
            }
            else if (xt_receiver_awaiting_completion(&xt_receiver)) {
                keyboard_bus_schedule_timeout(XT_COMPLETION_DELAY_US);
            }
        }
    }
    else {
        result = ps2_receiver_clock_changed(
            &ps2_receiver,
            keyboard_bus_clock_is_high(),
            keyboard_bus_data_is_high());
        value = ps2_receiver.value;
        if (result == KEYBOARD_RECEIVE_IN_PROGRESS &&
            ps2_receiver_frame_started(&ps2_receiver)) {
            keyboard_bus_schedule_timeout(PS2_FRAME_TIMEOUT_US);
        }
    }

    if (result != KEYBOARD_RECEIVE_IN_PROGRESS) {
        keyboard_bus_cancel_timeout();
        publish_result(result, value);
    }
}

ISR(TIMER1_COMPA_vect)
{
    keyboard_bus_cancel_timeout();
    if (transmit_active) {
        const ps2_transmit_result_t result = ps2_transmitter_timeout(&ps2_transmitter);
        apply_transmitter_lines();
        if (result == PS2_TRANSMIT_IN_PROGRESS) {
            EIFR = _BV(INTF1);
            keyboard_bus_interrupt_on_any_clock_change();
            keyboard_bus_schedule_timeout(ps2_transmitter.timeout_us);
        }
        else {
            finish_transmit(result);
        }
        return;
    }
    if (active_protocol == KEYBOARD_PROTOCOL_XT) {
        const keyboard_receive_result_t result = xt_receiver_timeout(&xt_receiver);
        publish_result(result, xt_receiver.value);
    }
    else {
        const uint8_t value = ps2_receiver.value;
        publish_result(ps2_receiver_timeout(&ps2_receiver), value);
    }
}
