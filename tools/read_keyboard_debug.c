#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/hid/IOHIDManager.h>

#include <inttypes.h>
#include <signal.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

enum {
    SOARER_VENDOR_ID = 0x16c0,
    SOARER_PRODUCT_ID = 0x047d,
    SOARER_DEBUG_USAGE_PAGE = 0xff31,
    SOARER_DEBUG_USAGE = 0x74,
    DEBUG_REPORT_SIZE = 32,
};

static const char *event_name(uint8_t event)
{
    switch (event) {
    case 1: return "byte";
    case 2: return "clock-phase-error";
    case 3: return "timeout";
    case 4: return "start-bit-error";
    case 5: return "parity-error";
    case 6: return "stop-bit-error";
    case 7: return "transmit-complete";
    case 8: return "transmit-not-acknowledged";
    case 0x80: return "startup";
    case 0x81: return "heartbeat";
    default: return "unknown";
    }
}

static void input_report(
    void *context,
    IOReturn result,
    void *sender,
    IOHIDReportType type,
    uint32_t report_id,
    uint8_t *report,
    CFIndex length)
{
    (void)context;
    (void)sender;
    (void)type;
    (void)report_id;
    if (result != kIOReturnSuccess || length < 7 || report[0] != 'S' || report[1] != 'R') {
        return;
    }
    printf("sequence=%u protocol=%s event=%s value=0x%02x\n",
           report[3], report[4] ? "XT" : "PS/2", event_name(report[5]), report[6]);
    fflush(stdout);
}

static CFNumberRef number(int value)
{
    return CFNumberCreate(kCFAllocatorDefault, kCFNumberIntType, &value);
}

static void set_match_number(CFMutableDictionaryRef match, CFStringRef key, int value)
{
    CFNumberRef item = number(value);
    CFDictionarySetValue(match, key, item);
    CFRelease(item);
}

static void stop_reader(int signal_number)
{
    (void)signal_number;
    CFRunLoopStop(CFRunLoopGetMain());
}

int main(void)
{
    IOHIDManagerRef manager = IOHIDManagerCreate(kCFAllocatorDefault, kIOHIDOptionsTypeNone);
    if (manager == NULL) {
        fputs("could not create IOHID manager\n", stderr);
        return EXIT_FAILURE;
    }

    CFMutableDictionaryRef match = CFDictionaryCreateMutable(
        kCFAllocatorDefault, 0, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);
    set_match_number(match, CFSTR(kIOHIDVendorIDKey), SOARER_VENDOR_ID);
    set_match_number(match, CFSTR(kIOHIDProductIDKey), SOARER_PRODUCT_ID);
    set_match_number(match, CFSTR(kIOHIDPrimaryUsagePageKey), SOARER_DEBUG_USAGE_PAGE);
    set_match_number(match, CFSTR(kIOHIDPrimaryUsageKey), SOARER_DEBUG_USAGE);
    IOHIDManagerSetDeviceMatching(manager, match);
    CFRelease(match);

    uint8_t report_buffer[DEBUG_REPORT_SIZE];
    IOHIDManagerRegisterInputReportCallback(manager, input_report, NULL);
    IOHIDManagerScheduleWithRunLoop(manager, CFRunLoopGetMain(), kCFRunLoopDefaultMode);
    const IOReturn opened = IOHIDManagerOpen(manager, kIOHIDOptionsTypeNone);
    if (opened != kIOReturnSuccess) {
        fprintf(stderr, "could not open debug HID interface: 0x%08x\n", opened);
        if (opened == kIOReturnNotPermitted) {
            fputs("grant Input Monitoring permission to the terminal or application running this reader\n",
                  stderr);
        }
        CFRelease(manager);
        return EXIT_FAILURE;
    }
    (void)report_buffer;

    signal(SIGINT, stop_reader);
    puts("waiting for Soarer reconstruction debug reports (Ctrl-C to stop)");
    CFRunLoopRun();

    IOHIDManagerClose(manager, kIOHIDOptionsTypeNone);
    CFRelease(manager);
    return EXIT_SUCCESS;
}
