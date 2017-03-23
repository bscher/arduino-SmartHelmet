#include "System.h"
#include "SignalData.h"
#include "Sensors.h"
#include "CommClient.h"
bool ___init;

#define SERIAL_LOCAL_RATE 9600
#define BUFFER_LEN 8

#define PIN_LED_STATUS	13
#define PIN_COMM_RX		8
#define PIN_COMM_TX		9

#define PIN_SIGNAL_RIGHT	12
#define PIN_SENSOR_RIGHT_A	A4
#define PIN_SENSOR_RIGHT_B	A5
#define PIN_SENSOR_RIGHT_C	A6

char buffer[BUFFER_LEN];
int buffer_index = 0;

void setup(void)
{
	System::init(SERIAL_LOCAL_RATE, PIN_LED_STATUS);
	System::toggleStatusLED(true);
	delay(250);

	debugPrint(F("Starting Bluetooth..."));
	CommClient::init(PIN_COMM_RX, PIN_COMM_TX);
	delay(250);

	debugPrint(F("Starting Sensors..."));
	Sensors::init(PIN_SIGNAL_RIGHT, PIN_SENSOR_RIGHT_A, PIN_SENSOR_RIGHT_B, PIN_SENSOR_RIGHT_C);
	delay(250);

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


SignalData left, right;
void loop(void)
{
	Sensors::getReadings(left, right);
	CommClient::sendSignalData(right);
	debugPrintln((int)right.dangerMagnitude);

	delay(250);
}