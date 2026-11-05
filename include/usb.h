#ifndef SOARER_USB_H
#define SOARER_USB_H

#include <stdint.h>
#include <stdbool.h>

enum {
    USB_VENDOR_REPORT_SIZE = 32,
};

void usb_init(void);
uint8_t usb_configuration(void);
uint16_t usb_milliseconds(void);
bool usb_vendor_send(const uint8_t report[USB_VENDOR_REPORT_SIZE]);

#endif
