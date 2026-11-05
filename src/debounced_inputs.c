#include "debounced_inputs.h"

#include <avr/interrupt.h>
#include <avr/io.h>

enum {
    INPUT_PIN_MASK = 0x1f,
    INPUT_DEBOUNCE_TICKS = 10,
};

volatile uint8_t input_sample_stable;
volatile uint8_t input_sample_candidate;
volatile uint8_t input_debounce_ticks;

ISR(TIMER3_COMPA_vect)
{
    const uint8_t sample = PINB & INPUT_PIN_MASK;

    if (sample != input_sample_candidate) {
        input_sample_candidate = sample;
        input_debounce_ticks = INPUT_DEBOUNCE_TICKS;
    }

    if (input_debounce_ticks != 0) {
        if (--input_debounce_ticks == 0) {
            input_sample_stable = input_sample_candidate;
        }
    }
}
