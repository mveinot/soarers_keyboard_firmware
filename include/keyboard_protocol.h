#ifndef SOARER_KEYBOARD_PROTOCOL_H
#define SOARER_KEYBOARD_PROTOCOL_H

#include <stdbool.h>
#include <stdint.h>

typedef enum {
    KEYBOARD_RECEIVE_IN_PROGRESS,
    KEYBOARD_RECEIVE_BYTE,
    KEYBOARD_RECEIVE_CLOCK_PHASE_ERROR,
    KEYBOARD_RECEIVE_TIMEOUT,
    KEYBOARD_RECEIVE_START_BIT_ERROR,
    KEYBOARD_RECEIVE_PARITY_ERROR,
    KEYBOARD_RECEIVE_STOP_BIT_ERROR,
} keyboard_receive_result_t;

typedef struct {
    uint8_t state;
    uint8_t value;
    uint8_t bit_count;
} xt_receiver_t;

typedef struct {
    uint8_t state;
    uint8_t value;
    uint8_t bit_count;
    bool parity;
} ps2_receiver_t;

typedef enum {
    PS2_TRANSMIT_IN_PROGRESS,
    PS2_TRANSMIT_COMPLETE,
    PS2_TRANSMIT_CLOCK_PHASE_ERROR,
    PS2_TRANSMIT_TIMEOUT,
    PS2_TRANSMIT_NOT_ACKNOWLEDGED,
} ps2_transmit_result_t;

typedef struct {
    uint8_t state;
    uint8_t shift;
    uint8_t bits_remaining;
    bool parity;
    bool clock_released;
    bool data_released;
    uint16_t timeout_us;
} ps2_transmitter_t;

void xt_receiver_reset(xt_receiver_t *receiver);
bool xt_receiver_awaiting_completion(const xt_receiver_t *receiver);
keyboard_receive_result_t xt_receiver_clock_rising(xt_receiver_t *receiver, bool data_high);
keyboard_receive_result_t xt_receiver_timeout(xt_receiver_t *receiver);

void ps2_receiver_reset(ps2_receiver_t *receiver);
bool ps2_receiver_frame_started(const ps2_receiver_t *receiver);
keyboard_receive_result_t ps2_receiver_clock_changed(
    ps2_receiver_t *receiver,
    bool clock_high,
    bool data_high);
keyboard_receive_result_t ps2_receiver_timeout(ps2_receiver_t *receiver);

void ps2_transmitter_start(ps2_transmitter_t *transmitter, uint8_t value);
ps2_transmit_result_t ps2_transmitter_timeout(ps2_transmitter_t *transmitter);
ps2_transmit_result_t ps2_transmitter_clock_changed(
    ps2_transmitter_t *transmitter,
    bool clock_high,
    bool data_high);

#endif
