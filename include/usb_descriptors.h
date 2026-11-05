#ifndef SOARER_USB_DESCRIPTORS_H
#define SOARER_USB_DESCRIPTORS_H

#include <stdbool.h>
#include <stdint.h>

#include <avr/pgmspace.h>

extern const uint8_t usb_device_descriptor[] PROGMEM;
extern const uint8_t usb_configuration_descriptor[] PROGMEM;
extern const uint8_t usb_report_descriptor_0[] PROGMEM;
extern const uint8_t usb_report_descriptor_1[] PROGMEM;
extern const uint8_t usb_report_descriptor_2[] PROGMEM;
extern const uint8_t usb_report_descriptor_3[] PROGMEM;
extern const uint8_t usb_string_language[] PROGMEM;
extern const uint8_t usb_string_manufacturer[] PROGMEM;
extern const uint8_t usb_string_product[] PROGMEM;

typedef struct {
    const uint8_t *address;
    uint16_t length;
} usb_descriptor_ref_t;

bool usb_descriptor_find(uint16_t value, uint16_t index, usb_descriptor_ref_t *result);

#endif
