#include "System.h"
#include "Sensors.h"
#include "CommClient.h"
bool ___init;

#define SERIAL_LOCAL_RATE 9600
#define BUFFER_LEN 8

char buffer[BUFFER_LEN];
int buffer_index = 0;

void setup(void)
{
	System::init(SERIAL_LOCAL_RATE);
	System::toggleStatusLED(true);

	delay(250);

	debugPrint(F("Starting Bluetooth..."));
	CommClient::init();
	debugPrintln(F("Done!"));

	delay(250);

	debugPrint(F("Starting Sensors..."));
	Sensors::init();
	debugPrintln(F("Done!"));

	delay(250);

	for (int i = 0; i < 10; i++) {
		System::toggleStatusLED(true);
		delay(50);
		System::toggleStatusLED(false);
		delay(50);
	}

	debugPrintln(F("--- Start ---"));
}

void loop(void)
{
	int reading = Sensors::getReading();

	buffer[0] = map(reading, 0, 256, 0, 128);
	CommClient::send(buffer, 1);
	debugPrintln((int)buffer[0]);

	delay(100);
}