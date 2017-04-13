#include "Sensors.h"

#define VALUE_BUFFER_LEN	10
#define SELECT_DELAY		1
#define DANGER_READ_TO_MAG(n)	(5 - map((n < 50) ? n : 50, 10, 50, 0, 5))

pin_t pin_signalLeft;
pin_t pin_signalRight;
pin_t pin_sensorRead;
pin_t pin_sensorSelect_A;
pin_t pin_sensorSelect_B;
pin_t pin_sensorSelect_C;

void Sensors::init(
	pin_t pinSignalLeft,
	pin_t pinSignalRight,
	pin_t pinSensorRead,
	pin_t pinSensorSelect_A,
	pin_t pinSensorSelect_B,
	pin_t pinSensorSelect_C)
{
	pin_signalLeft = pinSignalLeft;
	pin_signalRight = pinSignalRight;
	pin_sensorRead = pinSensorRead;
	pin_sensorSelect_A = pinSensorSelect_A;
	pin_sensorSelect_B = pinSensorSelect_B;
	pin_sensorSelect_C = pinSensorSelect_C;

	pinMode(pin_sensorSelect_A, OUTPUT);
	pinMode(pin_sensorSelect_B, OUTPUT);
	pinMode(pin_sensorSelect_C, OUTPUT);
}

void setSelect(int n) {
	digitalWrite(pin_sensorSelect_A, ((n >> 0) & 0x1) ? HIGH : LOW);
	digitalWrite(pin_sensorSelect_B, ((n >> 1) & 0x1) ? HIGH : LOW);
	digitalWrite(pin_sensorSelect_C, ((n >> 2) & 0x1) ? HIGH : LOW);
	delay(SELECT_DELAY);
}

int getAvgRead(int a, int b) {
	int read0, read1;

	setSelect(a);
	read0 = analogRead(pin_sensorRead);
	debugPrint(a);
	debugPrint(": ");
	debugPrintln(read0);

	setSelect(b);
	read1 = analogRead(pin_sensorRead);
	debugPrint(b);
	debugPrint(": ");
	debugPrintln(read1);

	return min(read0, read1);
}

void Sensors::getReadings(SignalData & left, SignalData & right)
{
	int readLeft, readRight;
	
	//Left
	readLeft = getAvgRead(0, 1);
	left = SignalData();
	left.refDirection = SignalData::LEFT;
	left.isTurnSignalOn = false;
	left.dangerMagnitude = DANGER_READ_TO_MAG(readLeft);

	//Right
	readRight = getAvgRead(4, 5);
	right = SignalData();
	right.refDirection = SignalData::RIGHT;
	right.isTurnSignalOn = false;
	right.dangerMagnitude = DANGER_READ_TO_MAG(readRight); 
	
	debugPrintln();
}