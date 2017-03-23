#include "System.h"

pin_t pin_statusLED;

void System::init(int localSerialRate, pin_t statusLEDPin)
{
	do delay(250);
	while (!Serial);
	Serial.begin(localSerialRate);

	pin_statusLED = statusLEDPin;
	pinMode(pin_statusLED, OUTPUT);
}

void System::throwFatalError(const char* err)
{
	while (1) {
		Serial.println(err);

		digitalWrite(pin_statusLED, HIGH);
		delay(500);
		digitalWrite(pin_statusLED, LOW);
		delay(500);
	}
}

void System::toggleStatusLED(bool toggle)
{
	digitalWrite(pin_statusLED, toggle ? HIGH : LOW);
}
