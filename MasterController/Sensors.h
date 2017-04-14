#ifndef _SENSORS_H_
#define _SENSORS_H_

#include "System.h"
#include "SignalData.h"
#include <math.h>

namespace Sensors
{
	void init(
		pin_t pinSignalLeft,
		pin_t pinSignalRight,
		pin_t pinSensorRead,
		pin_t pinSensorSelect_A,
		pin_t pinSensorSelect_B,
		pin_t pinSensorSelect_C);

	void getReadings(SignalData &left, SignalData &right);
};

#endif