#ifndef _DISPLAY_SCREENS_H
#define _DISPLAY_SCREENS_H

// 'splash screen'
const unsigned char splashScreen[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x07, 0x86, 0x03, 0x02, 0x07, 0xe1, 0xff, 0x00, 0x80, 0x4f, 0xf2, 0x01, 0x80, 0xcf, 0xf7, 0xfc,
	0x08, 0x46, 0x03, 0x02, 0x04, 0x10, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x80, 0xc8, 0x00, 0x40,
	0x10, 0x25, 0x05, 0x05, 0x04, 0x08, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x41, 0x48, 0x00, 0x40,
	0x10, 0x05, 0x05, 0x05, 0x04, 0x08, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x41, 0x48, 0x00, 0x40,
	0x10, 0x04, 0x89, 0x08, 0x84, 0x08, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x22, 0x48, 0x00, 0x40,
	0x0e, 0x04, 0x89, 0x08, 0x84, 0x10, 0x10, 0x00, 0xff, 0xcf, 0xf2, 0x01, 0x22, 0x4f, 0xf0, 0x40,
	0x01, 0xc4, 0x51, 0x08, 0x87, 0xe0, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x14, 0x48, 0x00, 0x40,
	0x00, 0x64, 0x71, 0x10, 0x44, 0x20, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x1c, 0x48, 0x00, 0x40,
	0x00, 0x24, 0x21, 0x1f, 0xc4, 0x10, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x08, 0x48, 0x00, 0x40,
	0x10, 0x24, 0x21, 0x20, 0x64, 0x08, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x08, 0x48, 0x00, 0x40,
	0x08, 0x44, 0x01, 0x20, 0x24, 0x04, 0x10, 0x00, 0x80, 0x48, 0x02, 0x01, 0x00, 0x48, 0x00, 0x40,
	0x07, 0x84, 0x01, 0x20, 0x24, 0x00, 0x10, 0x00, 0x80, 0x4f, 0xf3, 0xfd, 0x00, 0x4f, 0xf0, 0x40,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'noSignal_1'
const unsigned char noSignal_1[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xc0, 0xc0, 0x00, 0x00, 0x1f, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0x7f, 0xe1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0xf0, 0x00, 0xc0, 0x01, 0x81, 0xd8, 0x67, 0x03, 0xf0, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0xfc, 0x00, 0xe0, 0x01, 0x87, 0xf8, 0x7f, 0x83, 0xf8, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0x0c, 0x00, 0x7c, 0x01, 0x86, 0x18, 0x71, 0xc0, 0x1c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x3f, 0xc1, 0x8c, 0x18, 0x60, 0xc0, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x01, 0xe1, 0x8c, 0x18, 0x60, 0xc0, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x71, 0x8c, 0x18, 0x60, 0xc3, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x31, 0x8c, 0x18, 0x60, 0xc7, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc6, 0x06, 0x00, 0x80, 0x31, 0x8c, 0x18, 0x60, 0xc6, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc3, 0x0c, 0x00, 0xe0, 0x61, 0x8e, 0x38, 0x60, 0xc6, 0x1c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x81, 0xc3, 0xfc, 0x00, 0xff, 0xe1, 0x87, 0xf8, 0x60, 0xc3, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x81, 0xc0, 0xf0, 0x00, 0x3f, 0x81, 0x83, 0xd8, 0x60, 0xc1, 0xec, 0x30, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'noSignal_2'
const unsigned char noSignal_2[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xc0, 0xc0, 0x00, 0x00, 0x1f, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0x7f, 0xe1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0xf0, 0x00, 0xc0, 0x01, 0x81, 0xd8, 0x67, 0x03, 0xf0, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0xfc, 0x00, 0xe0, 0x01, 0x87, 0xf8, 0x7f, 0x83, 0xf8, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0x0c, 0x00, 0x7c, 0x01, 0x86, 0x18, 0x71, 0xc0, 0x1c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x3f, 0xc1, 0x8c, 0x18, 0x60, 0xc0, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x01, 0xe1, 0x8c, 0x18, 0x60, 0xc0, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x71, 0x8c, 0x18, 0x60, 0xc3, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x31, 0x8c, 0x18, 0x60, 0xc7, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc6, 0x06, 0x00, 0x80, 0x31, 0x8c, 0x18, 0x60, 0xc6, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc3, 0x0c, 0x00, 0xe0, 0x61, 0x8e, 0x38, 0x60, 0xc6, 0x1c, 0x30, 0xc0, 0x00, 0x00,
	0x01, 0x81, 0xc3, 0xfc, 0x00, 0xff, 0xe1, 0x87, 0xf8, 0x60, 0xc3, 0xfc, 0x30, 0xc0, 0x00, 0x00,
	0x01, 0x81, 0xc0, 0xf0, 0x00, 0x3f, 0x81, 0x83, 0xd8, 0x60, 0xc1, 0xec, 0x30, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'noSignal_3'
const unsigned char noSignal_3[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xc0, 0xc0, 0x00, 0x00, 0x1f, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0x7f, 0xe1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0xf0, 0x00, 0xc0, 0x01, 0x81, 0xd8, 0x67, 0x03, 0xf0, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0xfc, 0x00, 0xe0, 0x01, 0x87, 0xf8, 0x7f, 0x83, 0xf8, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0x0c, 0x00, 0x7c, 0x01, 0x86, 0x18, 0x71, 0xc0, 0x1c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x3f, 0xc1, 0x8c, 0x18, 0x60, 0xc0, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x01, 0xe1, 0x8c, 0x18, 0x60, 0xc0, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x71, 0x8c, 0x18, 0x60, 0xc3, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x31, 0x8c, 0x18, 0x60, 0xc7, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc6, 0x06, 0x00, 0x80, 0x31, 0x8c, 0x18, 0x60, 0xc6, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc3, 0x0c, 0x00, 0xe0, 0x61, 0x8e, 0x38, 0x60, 0xc6, 0x1c, 0x30, 0xc1, 0x80, 0x00,
	0x01, 0x81, 0xc3, 0xfc, 0x00, 0xff, 0xe1, 0x87, 0xf8, 0x60, 0xc3, 0xfc, 0x30, 0xc1, 0x80, 0x00,
	0x01, 0x81, 0xc0, 0xf0, 0x00, 0x3f, 0x81, 0x83, 0xd8, 0x60, 0xc1, 0xec, 0x30, 0xc1, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'noSignal_4'
const unsigned char noSignal_4[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xc0, 0xc0, 0x00, 0x00, 0x1f, 0xc1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0x7f, 0xe1, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xe0, 0xc0, 0x00, 0x00, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x01, 0xb0, 0xc0, 0xf0, 0x00, 0xc0, 0x01, 0x81, 0xd8, 0x67, 0x03, 0xf0, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0xfc, 0x00, 0xe0, 0x01, 0x87, 0xf8, 0x7f, 0x83, 0xf8, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x98, 0xc3, 0x0c, 0x00, 0x7c, 0x01, 0x86, 0x18, 0x71, 0xc0, 0x1c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x3f, 0xc1, 0x8c, 0x18, 0x60, 0xc0, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x8c, 0xc6, 0x06, 0x00, 0x01, 0xe1, 0x8c, 0x18, 0x60, 0xc0, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x71, 0x8c, 0x18, 0x60, 0xc3, 0xfc, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x86, 0xc6, 0x06, 0x00, 0x00, 0x31, 0x8c, 0x18, 0x60, 0xc7, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc6, 0x06, 0x00, 0x80, 0x31, 0x8c, 0x18, 0x60, 0xc6, 0x0c, 0x30, 0x00, 0x00, 0x00,
	0x01, 0x83, 0xc3, 0x0c, 0x00, 0xe0, 0x61, 0x8e, 0x38, 0x60, 0xc6, 0x1c, 0x30, 0xc1, 0x83, 0x00,
	0x01, 0x81, 0xc3, 0xfc, 0x00, 0xff, 0xe1, 0x87, 0xf8, 0x60, 0xc3, 0xfc, 0x30, 0xc1, 0x83, 0x00,
	0x01, 0x81, 0xc0, 0xf0, 0x00, 0x3f, 0x81, 0x83, 0xd8, 0x60, 0xc1, 0xec, 0x30, 0xc1, 0x83, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'stars_5'
const unsigned char stars_5[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x00, 0x40,
	0x06, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x18, 0x00, 0x00, 0x30, 0x00, 0x00, 0x60, 0x00, 0x00, 0xc0,
	0x07, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x38, 0x00, 0x00, 0x70, 0x00, 0x00, 0xe0,
	0x7f, 0xf0, 0x00, 0xff, 0xe0, 0x01, 0xff, 0xc0, 0x03, 0xff, 0x80, 0x07, 0xff, 0x00, 0x0f, 0xfe,
	0x3f, 0xe0, 0x00, 0x7f, 0xc0, 0x00, 0xff, 0x80, 0x01, 0xff, 0x00, 0x03, 0xfe, 0x00, 0x07, 0xfc,
	0x1f, 0xc0, 0x00, 0x3f, 0x80, 0x00, 0x7f, 0x00, 0x00, 0xfe, 0x00, 0x01, 0xfc, 0x00, 0x03, 0xf8,
	0x1f, 0x80, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf8, 0x00, 0x03, 0xf0,
	0x1f, 0x80, 0x00, 0x3f, 0x00, 0x00, 0x7e, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf8, 0x00, 0x03, 0xf0,
	0x1d, 0xc0, 0x00, 0x3b, 0x80, 0x00, 0x77, 0x00, 0x00, 0xee, 0x00, 0x01, 0xdc, 0x00, 0x03, 0xb8,
	0x10, 0xc0, 0x00, 0x21, 0x80, 0x00, 0x43, 0x00, 0x00, 0x86, 0x00, 0x01, 0x0c, 0x00, 0x02, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'warning_5'
const unsigned char warning_5[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x10,
	0x00, 0x0f, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xf0,
	0x00, 0x3f, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x03, 0xf0,
	0x00, 0xfe, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x0f, 0xe0,
	0x07, 0xf0, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0x00,
	0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x01, 0xfc, 0x00,
	0x3f, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x03, 0xf0, 0x00,
	0x3f, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x03, 0xf0, 0x00,
	0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x01, 0xfc, 0x00,
	0x07, 0xf0, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0x00,
	0x00, 0xfe, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x0f, 0xe0,
	0x00, 0x3f, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x03, 0xf0,
	0x00, 0x0f, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xf0,
	0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'warning_left'
const unsigned char warning_left[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x78, 0x00, 0x00, 0xfc, 0x00,
	0x01, 0xfc, 0x00, 0x07, 0xf0, 0x00, 0x0f, 0xe0, 0x00, 0x07, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00,
	0x7f, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x0
};


#endif