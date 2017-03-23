// Addons
#include <U8glib.h>
// ~

#include "System.h"
#include "CommClient.h"
#include "Display.h"
bool ___init;

#define PIN_LED_STATUS	13
#define PIN_COMM_RX		3
#define PIN_COMM_TX		4

#define SERIAL_LOCAL_RATE 9600
#define BUFFER_LEN 8
#define NO_SIGNAL_LOOP_MIN 10

uint32_t packageNumber = 1;
unsigned long millisLast = 0;
char buffer[BUFFER_LEN + 1];

void setup(void)
{
	System::init(SERIAL_LOCAL_RATE, PIN_LED_STATUS);
	System::toggleStatusLED(true);
	delay(250);

	debugPrint(F("Starting Bluetooth..."));
	CommClient::init(PIN_COMM_RX, PIN_COMM_TX);
	delay(250);

	debugPrint(F("Starting Display..."));
	Display::init();
	delay(250);

	for (int i = 0; i < 10; i++) {
		System::toggleStatusLED(true);
		delay(50);
		System::toggleStatusLED(false);
		delay(50);
	}

	debugPrintln(F("--- Start ---"));
}

int noSignalLoops = 0;
SignalData data;
void loop(void)
{
	if (CommClient::tryReceiveSignalData(data)) {
		debugPrint("Received: ");
		debugPrintln((int)data.dangerMagnitude);

		Display::draw(data);
		noSignalLoops = 0;
	}
	else {
		if (noSignalLoops > NO_SIGNAL_LOOP_MIN) {
			Display::drawNoSignal();
		}
		else
			noSignalLoops++;
	}

	delay(100);
}