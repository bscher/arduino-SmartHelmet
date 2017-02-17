#include "Sensors.h"

#define VALUE_BUFFER_LEN 10

const int8_t PIN_SENSOR_A = A1;

int median;
int rangeValue[VALUE_BUFFER_LEN] = { 0 };

void Sensors::init(void)
{
}

int Sensors::getReading(void)
{
	return analogRead(PIN_SENSOR_A);
}
