#include "usb_descriptors.h"

#include <stdbool.h>

enum {
    USB_DESCRIPTOR_DEVICE = 1,
    USB_DESCRIPTOR_CONFIGURATION = 2,
    USB_DESCRIPTOR_STRING = 3,
    USB_DESCRIPTOR_HID = 0x21,
    USB_DESCRIPTOR_REPORT = 0x22,
};

static bool set_result(usb_descriptor_ref_t *result, const uint8_t *address, uint16_t length)
{
    result->address = address;
    result->length = length;
    return true;
}

bool usb_descriptor_find(uint16_t value, uint16_t index, usb_descriptor_ref_t *result)
{
    const uint8_t type = value >> 8;
    const uint8_t number = value;

    switch (type) {
    case USB_DESCRIPTOR_DEVICE:
        return number == 0 && set_result(result, usb_device_descriptor, 18);
    case USB_DESCRIPTOR_CONFIGURATION:
        return number == 0 && set_result(result, usb_configuration_descriptor, 116);
    case USB_DESCRIPTOR_STRING:
        switch (number) {
        case 0:
            return set_result(result, usb_string_language, 4);
        case 1:
            return set_result(result, usb_string_manufacturer, 14);
        case 2:
            return set_result(result, usb_string_product, 56);
        default:
            return false;
        }
    case USB_DESCRIPTOR_HID:
        switch (index) {
        case 0:
            return set_result(result, usb_configuration_descriptor + 18, 9);
        case 1:
            return set_result(result, usb_configuration_descriptor + 43, 9);
        case 2:
            return set_result(result, usb_configuration_descriptor + 68, 9);
        case 3:
            return set_result(result, usb_configuration_descriptor + 93, 9);
        default:
            return false;
        }
    case USB_DESCRIPTOR_REPORT:
        switch (index) {
        case 0:
            return set_result(result, usb_report_descriptor_0, 18);
        case 1:
            return set_result(result, usb_report_descriptor_1, 21);
        case 2:
            return set_result(result, usb_report_descriptor_2, 220);
        case 3:
            return set_result(result, usb_report_descriptor_3, 28);
        default:
            return false;
        }
    default:
        return false;
    }
}
