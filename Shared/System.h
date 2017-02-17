#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#define S(x)	String(x)

#define debugPrint(x)		Serial.print(x)
#define debugPrintln(x)		Serial.println(x)

namespace System
{
	void init(int localSerialRate);
	void throwFatalError(const char*);

	void toggleStatusLED(bool toggle);
	
	namespace Pins
	{
		extern const uint8_t LED_STATUS;

		extern const uint8_t COMM_RX;
		extern const uint8_t COMM_TX;
	};
};

#endif