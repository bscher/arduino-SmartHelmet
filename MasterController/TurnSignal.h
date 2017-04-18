#ifndef _TURN_SIGNAL_H_
#define _TURN_SIGNAL_H_

#include "System.h"
#include "SignalData.h"

namespace TurnSignal
{
	void init(pin_t, pin_t);
	bool isTurnSignalOn(SignalData::Direction dir);
}

#endif // !_TURN_SIGNAL_H_
