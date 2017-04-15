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

#define PIN_SIGNAL_LEFT			A2
#define PIN_SIGNAL_RIGHT		A1

#define PIN_SENSOR_READ			A3
#define PIN_SENSOR_SELECT_A		2
#define PIN_SENSOR_SELECT_B		3
#define PIN_SENSOR_SELECT_C		4

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
	Sensors::init(
		PIN_SIGNAL_LEFT, PIN_SIGNAL_RIGHT, 
		PIN_SENSOR_READ, PIN_SENSOR_SELECT_A, PIN_SENSOR_SELECT_B, PIN_SENSOR_SELECT_C);
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
	CommClient::sendSignalData(left);
	CommClient::sendSignalData(right);
	debugPrint("Left:  ");
	debugPrintln((int)left.dangerMagnitude);
	debugPrint("Right: ");
	debugPrintln((int)right.dangerMagnitude);

	delay(500);
}