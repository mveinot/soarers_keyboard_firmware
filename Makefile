MCU := atmega32u4
KEYBOARD_PROTOCOL ?= ps2
CC := avr-gcc
OBJDUMP := avr-objdump
OBJCOPY := avr-objcopy
SIZE := avr-size
HOST_CC ?= cc

ifeq ($(KEYBOARD_PROTOCOL),ps2)
KEYBOARD_PROTOCOL_CPPFLAG := -DKEYBOARD_DEFAULT_PROTOCOL_XT=0
else ifeq ($(KEYBOARD_PROTOCOL),xt)
KEYBOARD_PROTOCOL_CPPFLAG := -DKEYBOARD_DEFAULT_PROTOCOL_XT=1
else
$(error KEYBOARD_PROTOCOL must be ps2 or xt)
endif

CPPFLAGS := -Iinclude $(KEYBOARD_PROTOCOL_CPPFLAG)
CFLAGS := -mmcu=$(MCU) -std=gnu11 -Os -Wall -Wextra -Werror -ffunction-sections -fdata-sections

BUILD_DIR := build
SOURCES := $(wildcard src/*.c)
OBJECTS := $(patsubst src/%.c,$(BUILD_DIR)/%.o,$(SOURCES))
TARGET := $(BUILD_DIR)/soarer-reconstruction

.PHONY: all clean debug-reader disassemble size test validate

all: $(TARGET).hex

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%.o: src/%.c | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(TARGET).elf: $(OBJECTS)
	$(CC) -mmcu=$(MCU) -Wl,--gc-sections -Wl,-Map,$(TARGET).map $^ -o $@

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -O ihex -R .eeprom $< $@

disassemble: all
	$(OBJDUMP) -d -S $(TARGET).elf

size: all
	$(SIZE) -A $(TARGET).elf

validate: all
	python3 scripts/validate_build.py $(TARGET).elf $(TARGET).hex firmware/original.bin

$(BUILD_DIR)/test_keyboard_protocol: tests/test_keyboard_protocol.c src/keyboard_protocol.c include/keyboard_protocol.h | $(BUILD_DIR)
	$(HOST_CC) -Iinclude -std=c11 -Wall -Wextra -Werror tests/test_keyboard_protocol.c src/keyboard_protocol.c -o $@

test: $(BUILD_DIR)/test_keyboard_protocol
	$(BUILD_DIR)/test_keyboard_protocol

$(BUILD_DIR)/read_keyboard_debug: tools/read_keyboard_debug.c | $(BUILD_DIR)
	$(HOST_CC) -std=c11 -Wall -Wextra -Werror $< -framework IOKit -framework CoreFoundation -o $@

debug-reader: $(BUILD_DIR)/read_keyboard_debug

clean:
	rm -rf $(BUILD_DIR)
