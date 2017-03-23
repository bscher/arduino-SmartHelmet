#include "Sensors.h"

#define VALUE_BUFFER_LEN	10

pin_t pin_signalRight;
pin_t pin_sensorRightA;
pin_t pin_sensorRightB;
pin_t pin_sensorRightC;

int median;
int rangeValue[2][VALUE_BUFFER_LEN] = { 0 };

void Sensors::init(pin_t signalRight, pin_t sensorRightA, pin_t sensorRightB, pin_t sensorRightC)
{
	pin_signalRight = signalRight;
	pin_sensorRightA = sensorRightA;
	pin_sensorRightB = sensorRightB;
	pin_sensorRightC = sensorRightC;
}

void Sensors::getReadings(SignalData & left, SignalData & right)
{
	int read;

	right = SignalData();
	right.refDirection = SignalData::RIGHT;
	right.isTurnSignalOn = digitalRead(pin_signalRight);
	debugPrint("Button: ");
	debugPrintln(right.isTurnSignalOn);
	read =  analogRead(pin_sensorRightA);

	right.dangerMagnitude =  5 - map((read < 100) ? read : 100, 0, 100, 0, 5);

	left = SignalData();
	left.refDirection = SignalData::LEFT;
	left.isTurnSignalOn = false;
	// TODO
}

/*
int Sensors::getReadings(void)
{
	int reading = analogRead(pin_sensorA);
	int scale = 5;
	if (reading <= 60)
		scale = 1;
	else if (reading > 60 && reading <= 120)
		scale = 2;
	else if (reading > 120 && reading <= 180)
		scale = 3;
	else  if (reading > 180 && reading <= 240)
		scale = 4;
	else
		scale = 5;

	//return scale;
	return analogRead(pin_sensorA);
}
*/