#include "keyboard_bus.h"

#include <avr/io.h>

enum {
    KEYBOARD_DATA_BIT = PD0,
    KEYBOARD_CLOCK_BIT = PD1,
    TIMER1_TICKS_PER_MICROSECOND = 2,
};

bool keyboard_bus_data_is_high(void)
{
    return (PIND & _BV(KEYBOARD_DATA_BIT)) != 0;
}

bool keyboard_bus_clock_is_high(void)
{
    return (PIND & _BV(KEYBOARD_CLOCK_BIT)) != 0;
}

void keyboard_bus_release_data(void)
{
    DDRD &= (uint8_t)~_BV(KEYBOARD_DATA_BIT);
    PORTD |= _BV(KEYBOARD_DATA_BIT);
}

void keyboard_bus_assert_data(void)
{
    PORTD &= (uint8_t)~_BV(KEYBOARD_DATA_BIT);
    DDRD |= _BV(KEYBOARD_DATA_BIT);
}

void keyboard_bus_release_clock(void)
{
    DDRD &= (uint8_t)~_BV(KEYBOARD_CLOCK_BIT);
    PORTD |= _BV(KEYBOARD_CLOCK_BIT);
}

void keyboard_bus_assert_clock(void)
{
    PORTD &= (uint8_t)~_BV(KEYBOARD_CLOCK_BIT);
    DDRD |= _BV(KEYBOARD_CLOCK_BIT);
}

void keyboard_bus_cancel_timeout(void)
{
    TCCR1B &= (uint8_t)~(_BV(CS12) | _BV(CS11) | _BV(CS10));
    TIMSK1 &= (uint8_t)~_BV(OCIE1A);
    TCNT1 = 0;
    TIFR1 = _BV(OCF1A);
}

void keyboard_bus_schedule_timeout(uint16_t microseconds)
{
    keyboard_bus_cancel_timeout();
    if (microseconds == 0) {
        return;
    }

    OCR1A = microseconds * TIMER1_TICKS_PER_MICROSECOND;
    TIMSK1 |= _BV(OCIE1A);
    TCCR1B = (TCCR1B & (uint8_t)~(_BV(CS12) | _BV(CS11) | _BV(CS10))) | _BV(CS11);
}

void keyboard_bus_disable_clock_interrupt(void)
{
    EIMSK &= (uint8_t)~_BV(INT1);
    EIFR = _BV(INTF1);
}

void keyboard_bus_interrupt_on_any_clock_change(void)
{
    keyboard_bus_disable_clock_interrupt();
    EICRA = (EICRA & (uint8_t)~(_BV(ISC11) | _BV(ISC10))) | _BV(ISC10);
    EIMSK |= _BV(INT1);
}

void keyboard_bus_interrupt_on_clock_rising(void)
{
    keyboard_bus_disable_clock_interrupt();
    EICRA |= _BV(ISC11) | _BV(ISC10);
    EIMSK |= _BV(INT1);
}

void keyboard_bus_initialize(void)
{
    keyboard_bus_release_clock();
    keyboard_bus_release_data();

    TCCR1A = 0;
    TCCR1B = _BV(WGM12);
    keyboard_bus_cancel_timeout();
    keyboard_bus_interrupt_on_any_clock_change();
}
