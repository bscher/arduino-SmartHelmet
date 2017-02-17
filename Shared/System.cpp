#include "System.h"

void System::init(int localSerialRate)
{
	do delay(250);
	while (!Serial);
	Serial.begin(localSerialRate);
}

void System::throwFatalError(const char* err)
{
	while (1) {
		Serial.println(err);

		digitalWrite(Pins::LED_STATUS, HIGH);
		delay(500);
		digitalWrite(Pins::LED_STATUS, LOW);
		delay(500);
	}
}

void System::toggleStatusLED(bool toggle)
{
	digitalWrite(Pins::LED_STATUS, toggle ? HIGH : LOW);
}
