#ifndef SOARER_DEBOUNCED_INPUTS_H
#define SOARER_DEBOUNCED_INPUTS_H

#include <stdint.h>

/*
 * Provisional names for the five-bit input sampled by TIMER3_COMPA.
 * The electrical purpose of these pins is not yet established.
 */
extern volatile uint8_t input_sample_stable;
extern volatile uint8_t input_sample_candidate;
extern volatile uint8_t input_debounce_ticks;

#endif
