#ifndef _SENSORS_H_
#define _SENSORS_H_

#include "System.h"
#include "SignalData.h"
#include "TurnSignal.h"

namespace Sensors
{
	void init(
		pin_t pinSensorRead,
		pin_t pinSensorSelect_A,
		pin_t pinSensorSelect_B,
		pin_t pinSensorSelect_C);

	void getReadings(SignalData &left, SignalData &right);
	void pulseChain(void);
};

#endif