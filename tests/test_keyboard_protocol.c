#include "keyboard_protocol.h"

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

static void test_xt_byte(void)
{
    xt_receiver_t receiver;
    xt_receiver_reset(&receiver);
    assert(xt_receiver_clock_rising(&receiver, false) == KEYBOARD_RECEIVE_IN_PROGRESS);

    const uint8_t expected = 0xa5;
    for (uint8_t bit = 0; bit < 8; ++bit) {
        assert(xt_receiver_clock_rising(&receiver, (expected >> bit) & 1U) ==
               KEYBOARD_RECEIVE_IN_PROGRESS);
    }
    assert(xt_receiver_timeout(&receiver) == KEYBOARD_RECEIVE_BYTE);
    assert(receiver.value == expected);

    xt_receiver_reset(&receiver);
    assert(xt_receiver_clock_rising(&receiver, true) == KEYBOARD_RECEIVE_START_BIT_ERROR);
    assert(xt_receiver_timeout(&receiver) == KEYBOARD_RECEIVE_TIMEOUT);
}

static keyboard_receive_result_t ps2_transition(
    ps2_receiver_t *receiver,
    bool clock_high,
    bool data_high)
{
    return ps2_receiver_clock_changed(receiver, clock_high, data_high);
}

static keyboard_receive_result_t send_ps2_byte(
    ps2_receiver_t *receiver,
    uint8_t value,
    bool parity_bit,
    bool stop_bit)
{
    assert(ps2_transition(receiver, false, false) == KEYBOARD_RECEIVE_IN_PROGRESS);
    for (uint8_t bit = 0; bit < 8; ++bit) {
        const bool data = (value >> bit) & 1U;
        assert(ps2_transition(receiver, true, data) == KEYBOARD_RECEIVE_IN_PROGRESS);
        assert(ps2_transition(receiver, false, data) == KEYBOARD_RECEIVE_IN_PROGRESS);
    }
    assert(ps2_transition(receiver, true, parity_bit) == KEYBOARD_RECEIVE_IN_PROGRESS);
    keyboard_receive_result_t result = ps2_transition(receiver, false, parity_bit);
    if (result != KEYBOARD_RECEIVE_IN_PROGRESS) {
        return result;
    }
    assert(ps2_transition(receiver, true, stop_bit) == KEYBOARD_RECEIVE_IN_PROGRESS);
    return ps2_transition(receiver, false, stop_bit);
}

static void test_ps2_byte(void)
{
    ps2_receiver_t receiver;
    ps2_receiver_reset(&receiver);
    assert(send_ps2_byte(&receiver, 0xa5, true, true) == KEYBOARD_RECEIVE_BYTE);
    assert(receiver.value == 0xa5);

    ps2_receiver_reset(&receiver);
    assert(send_ps2_byte(&receiver, 0x01, false, true) == KEYBOARD_RECEIVE_BYTE);
    assert(receiver.value == 0x01);
}

static void test_ps2_errors(void)
{
    ps2_receiver_t receiver;
    ps2_receiver_reset(&receiver);
    assert(send_ps2_byte(&receiver, 0xa5, false, true) == KEYBOARD_RECEIVE_PARITY_ERROR);

    ps2_receiver_reset(&receiver);
    assert(send_ps2_byte(&receiver, 0xa5, true, false) == KEYBOARD_RECEIVE_STOP_BIT_ERROR);

    ps2_receiver_reset(&receiver);
    assert(ps2_transition(&receiver, true, false) == KEYBOARD_RECEIVE_CLOCK_PHASE_ERROR);

    ps2_receiver_reset(&receiver);
    assert(ps2_receiver_timeout(&receiver) == KEYBOARD_RECEIVE_TIMEOUT);
}

static ps2_transmit_result_t transmit_clock(
    ps2_transmitter_t *transmitter,
    bool clock_high,
    bool data_high)
{
    return ps2_transmitter_clock_changed(transmitter, clock_high, data_high);
}

static void test_ps2_transmit(void)
{
    ps2_transmitter_t transmitter;
    ps2_transmitter_start(&transmitter, 0xa5);
    assert(!transmitter.clock_released);
    assert(transmitter.data_released);
    assert(transmitter.timeout_us == 200);

    assert(ps2_transmitter_timeout(&transmitter) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmitter.clock_released);
    assert(!transmitter.data_released);
    assert(transmitter.timeout_us == 20000);

    const uint8_t value = 0xa5;
    for (uint8_t bit = 0; bit < 8; ++bit) {
        assert(transmit_clock(&transmitter, true, false) == PS2_TRANSMIT_IN_PROGRESS);
        assert(transmit_clock(&transmitter, false, false) == PS2_TRANSMIT_IN_PROGRESS);
        assert(transmitter.data_released == (bool)((value >> bit) & 1U));
    }
    assert(transmit_clock(&transmitter, true, false) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmit_clock(&transmitter, false, false) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmitter.data_released); /* odd parity for four set data bits */
    assert(transmit_clock(&transmitter, true, false) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmit_clock(&transmitter, false, false) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmitter.data_released); /* released stop bit */
    assert(transmit_clock(&transmitter, true, false) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmit_clock(&transmitter, false, false) == PS2_TRANSMIT_COMPLETE);
    assert(transmitter.timeout_us == 0);
}

static void test_ps2_transmit_errors(void)
{
    ps2_transmitter_t transmitter;
    ps2_transmitter_start(&transmitter, 0x00);
    assert(ps2_transmitter_timeout(&transmitter) == PS2_TRANSMIT_IN_PROGRESS);
    assert(transmit_clock(&transmitter, false, false) == PS2_TRANSMIT_CLOCK_PHASE_ERROR);

    ps2_transmitter_start(&transmitter, 0x00);
    assert(ps2_transmitter_timeout(&transmitter) == PS2_TRANSMIT_IN_PROGRESS);
    assert(ps2_transmitter_timeout(&transmitter) == PS2_TRANSMIT_TIMEOUT);
}

int main(void)
{
    test_xt_byte();
    test_ps2_byte();
    test_ps2_errors();
    test_ps2_transmit();
    test_ps2_transmit_errors();
    puts("keyboard protocol tests passed");
    return 0;
}
