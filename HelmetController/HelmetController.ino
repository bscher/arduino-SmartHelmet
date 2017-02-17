// Addons
#include <U8glib.h>
// ~

#include "System.h"
#include "CommClient.h"
#include "Display.h"
bool ___init;

#define SERIAL_LOCAL_RATE 9600
#define BUFFER_LEN 8

uint32_t packageNumber = 1;
unsigned long millisLast = 0;
uint8_t buffer[BUFFER_LEN + 1];

void setup(void)
{
	System::init(SERIAL_LOCAL_RATE);
	System::toggleStatusLED(true);

	delay(250);

	debugPrint(F("Starting Bluetooth..."));
	CommClient::init();
	debugPrintln(F("Done!"));

	delay(250);

	debugPrint(F("Starting Display..."));
	Display::init();
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

int n = 0;
void loop(void)
{
	int read;

	if ((read = CommClient::receive(buffer, BUFFER_LEN)) > 0) {
		debugPrint("Received: ");
		debugPrintln(String(buffer[0]).c_str());

		Display::draw(buffer[0]);
	}

	delay(100);
}