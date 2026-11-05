#include "usb.h"

#include "usb_descriptors.h"

#include <stdbool.h>
#include <stdint.h>

#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

enum {
    USB_ENDPOINT0_SIZE = 32,

    USB_REQUEST_GET_STATUS = 0,
    USB_REQUEST_CLEAR_FEATURE = 1,
    USB_REQUEST_SET_FEATURE = 3,
    USB_REQUEST_SET_ADDRESS = 5,
    USB_REQUEST_GET_DESCRIPTOR = 6,
    USB_REQUEST_GET_CONFIGURATION = 8,
    USB_REQUEST_SET_CONFIGURATION = 9,
    USB_REQUEST_GET_INTERFACE = 10,
    USB_REQUEST_SET_INTERFACE = 11,

    HID_REQUEST_GET_REPORT = 1,
    HID_REQUEST_GET_IDLE = 2,
    HID_REQUEST_GET_PROTOCOL = 3,
    HID_REQUEST_SET_REPORT = 9,
    HID_REQUEST_SET_IDLE = 10,
    HID_REQUEST_SET_PROTOCOL = 11,

    USB_TYPE_MASK = 0x60,
    USB_TYPE_STANDARD = 0x00,
    USB_TYPE_CLASS = 0x20,
    USB_RECIPIENT_MASK = 0x1f,
    USB_RECIPIENT_DEVICE = 0,
    USB_RECIPIENT_INTERFACE = 1,
    USB_RECIPIENT_ENDPOINT = 2,
    USB_DIRECTION_IN = 0x80,

    USB_FEATURE_ENDPOINT_HALT = 0,
};

typedef struct {
    uint8_t request_type;
    uint8_t request;
    uint16_t value;
    uint16_t index;
    uint16_t length;
} usb_setup_packet_t;

typedef struct {
    uint8_t control;
    uint8_t configuration0;
    uint8_t configuration1;
} endpoint_configuration_t;

/* Exact endpoint configuration table from reference flash 0x035d. */
static const endpoint_configuration_t endpoint_configurations[5] PROGMEM = {
    {0x01, 0xc1, 0x06},
    {0x01, 0xc1, 0x26},
    {0x01, 0xc1, 0x26},
    {0x01, 0xc1, 0x36},
    {0x01, 0xc0, 0x36},
};

static volatile uint8_t configuration_value;
static uint8_t idle_rate[4];
static uint8_t protocol_value[4] = {1, 1, 1, 1};

static void endpoint0_stall(void)
{
    UECONX = (1 << STALLRQ) | (1 << EPEN);
}

static void endpoint0_clear_setup(void)
{
    UEINTX = (uint8_t)~((1 << RXSTPI) | (1 << RXOUTI) | (1 << TXINI));
}

static bool endpoint0_wait_in_ready(void)
{
    for (;;) {
        const uint8_t flags = UEINTX;
        if (flags & (1 << TXINI)) {
            return true;
        }
        if (flags & (1 << RXOUTI)) {
            UEINTX = (uint8_t)~(1 << RXOUTI);
            return false;
        }
    }
}

static void endpoint0_send_packet(void)
{
    UEINTX = (uint8_t)~(1 << TXINI);
}

static void endpoint0_send_status(void)
{
    if (endpoint0_wait_in_ready()) {
        endpoint0_send_packet();
    }
}

static void endpoint0_send_progmem(const uint8_t *data, uint16_t available, uint16_t requested)
{
    uint16_t remaining = available < requested ? available : requested;

    while (remaining != 0) {
        if (!endpoint0_wait_in_ready()) {
            return;
        }

        uint8_t packet_length = remaining < USB_ENDPOINT0_SIZE ? remaining : USB_ENDPOINT0_SIZE;
        remaining -= packet_length;
        while (packet_length-- != 0) {
            UEDATX = pgm_read_byte(data++);
        }
        endpoint0_send_packet();
    }
}

static void endpoint0_send_zeros(uint16_t requested, uint16_t maximum)
{
    uint16_t remaining = requested < maximum ? requested : maximum;

    while (remaining != 0) {
        if (!endpoint0_wait_in_ready()) {
            return;
        }
        uint8_t packet_length = remaining < USB_ENDPOINT0_SIZE ? remaining : USB_ENDPOINT0_SIZE;
        remaining -= packet_length;
        for (uint8_t index = 0; index < packet_length; ++index) {
            UEDATX = 0;
        }
        endpoint0_send_packet();
    }
}

static void endpoint0_send_bytes(const uint8_t *data, uint8_t available, uint16_t requested)
{
    uint8_t length = requested < available ? requested : available;
    if (!endpoint0_wait_in_ready()) {
        return;
    }
    for (uint8_t index = 0; index < length; ++index) {
        UEDATX = data[index];
    }
    endpoint0_send_packet();
}

static void endpoint0_discard_out(uint16_t remaining)
{
    while (remaining != 0) {
        while (!(UEINTX & (1 << RXOUTI))) {
        }
        while ((UEINTX & (1 << RWAL)) && remaining != 0) {
            (void)UEDATX;
            --remaining;
        }
        UEINTX = (uint8_t)~(1 << RXOUTI);
    }
    endpoint0_send_status();
}

static usb_setup_packet_t endpoint0_read_setup(void)
{
    usb_setup_packet_t setup;
    setup.request_type = UEDATX;
    setup.request = UEDATX;
    setup.value = UEDATX;
    setup.value |= (uint16_t)UEDATX << 8;
    setup.index = UEDATX;
    setup.index |= (uint16_t)UEDATX << 8;
    setup.length = UEDATX;
    setup.length |= (uint16_t)UEDATX << 8;
    endpoint0_clear_setup();
    return setup;
}

static void configure_non_control_endpoints(uint8_t configuration)
{
    for (uint8_t endpoint = 1; endpoint <= 5; ++endpoint) {
        UENUM = endpoint;
        if (configuration == 0) {
            UECONX = 0;
            continue;
        }

        const endpoint_configuration_t *entry = &endpoint_configurations[endpoint - 1];
        UECONX = pgm_read_byte(&entry->control);
        UECFG0X = pgm_read_byte(&entry->configuration0);
        UECFG1X = pgm_read_byte(&entry->configuration1);
        if (!(UESTA0X & (1 << CFGOK))) {
            configuration_value = 0;
        }
    }
    UERST = 0x1e;
    UERST = 0;
    UENUM = 0;
}

static bool handle_standard_request(const usb_setup_packet_t *setup)
{
    const uint8_t recipient = setup->request_type & USB_RECIPIENT_MASK;
    const bool direction_in = setup->request_type & USB_DIRECTION_IN;

    switch (setup->request) {
    case USB_REQUEST_GET_DESCRIPTOR: {
        if (!direction_in) {
            return false;
        }
        usb_descriptor_ref_t descriptor;
        if (!usb_descriptor_find(setup->value, setup->index, &descriptor)) {
            return false;
        }
        endpoint0_send_progmem(descriptor.address, descriptor.length, setup->length);
        return true;
    }
    case USB_REQUEST_SET_ADDRESS:
        if (direction_in || recipient != USB_RECIPIENT_DEVICE || setup->value > 127) {
            return false;
        }
        endpoint0_send_status();
        while (!(UEINTX & (1 << TXINI))) {
        }
        UDADDR = (uint8_t)setup->value | (1 << ADDEN);
        return true;
    case USB_REQUEST_SET_CONFIGURATION:
        if (direction_in || recipient != USB_RECIPIENT_DEVICE || setup->value > 1) {
            return false;
        }
        configuration_value = setup->value;
        endpoint0_send_status();
        configure_non_control_endpoints(configuration_value);
        return true;
    case USB_REQUEST_GET_CONFIGURATION: {
        if (!direction_in || recipient != USB_RECIPIENT_DEVICE) {
            return false;
        }
        const uint8_t value = configuration_value;
        endpoint0_send_bytes(&value, 1, setup->length);
        return true;
    }
    case USB_REQUEST_GET_STATUS: {
        if (!direction_in) {
            return false;
        }
        uint8_t status[2] = {0, 0};
        if (recipient == USB_RECIPIENT_ENDPOINT) {
            const uint8_t saved_endpoint = UENUM;
            UENUM = setup->index & 0x7f;
            status[0] = (UECONX & (1 << STALLRQ)) != 0;
            UENUM = saved_endpoint;
        }
        endpoint0_send_bytes(status, sizeof(status), setup->length);
        return true;
    }
    case USB_REQUEST_CLEAR_FEATURE:
    case USB_REQUEST_SET_FEATURE:
        if (direction_in || recipient != USB_RECIPIENT_ENDPOINT ||
            setup->value != USB_FEATURE_ENDPOINT_HALT) {
            return false;
        }
        {
            const uint8_t saved_endpoint = UENUM;
            UENUM = setup->index & 0x7f;
            if (setup->request == USB_REQUEST_SET_FEATURE) {
                UECONX |= 1 << STALLRQ;
            }
            else {
                UECONX &= (uint8_t)~(1 << STALLRQ);
                UECONX |= 1 << RSTDT;
            }
            UENUM = saved_endpoint;
        }
        endpoint0_send_status();
        return true;
    case USB_REQUEST_GET_INTERFACE: {
        if (!direction_in || recipient != USB_RECIPIENT_INTERFACE || setup->index >= 4) {
            return false;
        }
        const uint8_t alternate_setting = 0;
        endpoint0_send_bytes(&alternate_setting, 1, setup->length);
        return true;
    }
    case USB_REQUEST_SET_INTERFACE:
        if (direction_in || recipient != USB_RECIPIENT_INTERFACE || setup->index >= 4 ||
            setup->value != 0) {
            return false;
        }
        endpoint0_send_status();
        return true;
    default:
        return false;
    }
}

static bool handle_hid_request(const usb_setup_packet_t *setup)
{
    const uint8_t interface = setup->index;
    if ((setup->request_type & USB_RECIPIENT_MASK) != USB_RECIPIENT_INTERFACE || interface >= 4) {
        return false;
    }

    switch (setup->request) {
    case HID_REQUEST_GET_IDLE:
        if (!(setup->request_type & USB_DIRECTION_IN)) {
            return false;
        }
        endpoint0_send_bytes(&idle_rate[interface], 1, setup->length);
        return true;
    case HID_REQUEST_SET_IDLE:
        if (setup->request_type & USB_DIRECTION_IN) {
            return false;
        }
        idle_rate[interface] = setup->value >> 8;
        endpoint0_send_status();
        return true;
    case HID_REQUEST_GET_PROTOCOL:
        if (!(setup->request_type & USB_DIRECTION_IN)) {
            return false;
        }
        endpoint0_send_bytes(&protocol_value[interface], 1, setup->length);
        return true;
    case HID_REQUEST_SET_PROTOCOL:
        if (setup->request_type & USB_DIRECTION_IN || setup->value > 1) {
            return false;
        }
        protocol_value[interface] = setup->value;
        endpoint0_send_status();
        return true;
    case HID_REQUEST_GET_REPORT:
        if (!(setup->request_type & USB_DIRECTION_IN)) {
            return false;
        }
        endpoint0_send_zeros(setup->length, 64);
        return true;
    case HID_REQUEST_SET_REPORT:
        if (setup->request_type & USB_DIRECTION_IN) {
            return false;
        }
        endpoint0_discard_out(setup->length);
        return true;
    default:
        return false;
    }
}

void usb_init(void)
{
    UHWCON = 1 << UVREGE;
    USBCON = (1 << USBE) | (1 << FRZCLK);
    PLLCSR = (1 << PINDIV) | (1 << PLLE);
    while (!(PLLCSR & (1 << PLOCK))) {
    }
    USBCON = (1 << USBE) | (1 << OTGPADE);
    UDCON = 0;
    configuration_value = 0;
    UDIEN = (1 << WAKEUPE) | (1 << EORSTE) | (1 << SOFE) | (1 << SUSPE);
}

uint8_t usb_configuration(void)
{
    return configuration_value;
}

bool usb_vendor_send(const uint8_t report[USB_VENDOR_REPORT_SIZE])
{
    if (configuration_value == 0) {
        return false;
    }

    const uint8_t saved_status = SREG;
    cli();
    const uint8_t saved_endpoint = UENUM;
    UENUM = 3;
    if (!(UEINTX & (1 << RWAL))) {
        UENUM = saved_endpoint;
        SREG = saved_status;
        return false;
    }

    for (uint8_t index = 0; index < USB_VENDOR_REPORT_SIZE; ++index) {
        UEDATX = report[index];
    }
    UEINTX = (uint8_t)~(1 << TXINI);
    UENUM = saved_endpoint;
    SREG = saved_status;
    return true;
}

ISR(USB_GEN_vect)
{
    const uint8_t flags = UDINT;
    UDINT = 0;

    if (flags & (1 << EORSTI)) {
        UENUM = 0;
        UECONX = 1 << EPEN;
        UECFG0X = 0;
        UECFG1X = (1 << ALLOC) | (2 << EPSIZE0);
        UEIENX = 1 << RXSTPE;
        configuration_value = 0;
    }
}

ISR(USB_COM_vect)
{
    UENUM = 0;
    if (!(UEINTX & (1 << RXSTPI))) {
        endpoint0_stall();
        return;
    }

    const usb_setup_packet_t setup = endpoint0_read_setup();
    bool handled = false;
    switch (setup.request_type & USB_TYPE_MASK) {
    case USB_TYPE_STANDARD:
        handled = handle_standard_request(&setup);
        break;
    case USB_TYPE_CLASS:
        handled = handle_hid_request(&setup);
        break;
    default:
        break;
    }
    if (!handled) {
        endpoint0_stall();
    }
}
