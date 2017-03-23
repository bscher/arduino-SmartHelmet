#ifndef _SENSORS_H_
#define _SENSORS_H_

#include "System.h"
#include "SignalData.h"

namespace Sensors
{
	void init(pin_t signalLeft, pin_t sensorLeftA, pin_t sensorLeftB, pin_t sensorLeftC);

	void getReadings(SignalData &left, SignalData &right);
};

#endif