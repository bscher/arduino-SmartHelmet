#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "System.h"
#include "SignalData.h"

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

namespace Display
{
	void init(void);

	void drawNoSignal(void);
	void draw(SignalData d);
};

#endif