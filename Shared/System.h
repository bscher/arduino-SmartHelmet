#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#define S(x)	String(x)
#define pin_t	uint8_t
#define byte_t  char

#define debugPrint(x)		Serial.print(x)
#define debugPrintln(x)		Serial.println(x)

#define min4(a,b,c,d)	(min(a,min(b,min(c,d))))

namespace System
{
	void init(int localSerialRate, pin_t statusLEDPin);
	void throwFatalError(const char*);

	void toggleStatusLED(bool toggle);
};

#endif