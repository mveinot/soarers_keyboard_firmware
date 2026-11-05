#include "keyboard_receive.h"
#include "usb.h"

#include <stdbool.h>
#include <stdint.h>

#include <avr/interrupt.h>

#ifndef KEYBOARD_DEFAULT_PROTOCOL_XT
#define KEYBOARD_DEFAULT_PROTOCOL_XT 0
#endif

enum {
    DEBUG_REPORT_MAGIC_0 = 'S',
    DEBUG_REPORT_MAGIC_1 = 'R',
    DEBUG_REPORT_VERSION = 1,
    DEBUG_EVENT_STARTUP = 0x80,
};

static keyboard_protocol_t default_protocol(void)
{
    return KEYBOARD_DEFAULT_PROTOCOL_XT ? KEYBOARD_PROTOCOL_XT : KEYBOARD_PROTOCOL_PS2;
}

static void prepare_debug_report(
    uint8_t report[USB_VENDOR_REPORT_SIZE],
    uint8_t sequence,
    keyboard_protocol_t protocol,
    uint8_t event,
    uint8_t value)
{
    for (uint8_t index = 0; index < USB_VENDOR_REPORT_SIZE; ++index) {
        report[index] = 0;
    }
    report[0] = DEBUG_REPORT_MAGIC_0;
    report[1] = DEBUG_REPORT_MAGIC_1;
    report[2] = DEBUG_REPORT_VERSION;
    report[3] = sequence;
    report[4] = protocol;
    report[5] = event;
    report[6] = value;
}

int main(void)
{
    const keyboard_protocol_t protocol = default_protocol();
    uint8_t sequence = 0;
    uint8_t report[USB_VENDOR_REPORT_SIZE];
    bool report_pending = true;

    usb_init();
    keyboard_receive_initialize(protocol);
    prepare_debug_report(report, sequence++, protocol, DEBUG_EVENT_STARTUP, 0);
    sei();

    for (;;) {
        if (report_pending) {
            report_pending = !usb_vendor_send(report);
            continue;
        }

        keyboard_event_t event;
        if (keyboard_receive_take_event(&event)) {
            prepare_debug_report(report, sequence++, protocol, event.type, event.value);
            report_pending = true;
        }
    }
}
