#ifndef _SIGNALDATA_H_
#define _SIGNALDATA_H_

#include "System.h"

struct SignalData {
public:
	enum Direction {
		LEFT = 0,
		RIGHT = 1
	};

	Direction refDirection;
	bool isTurnSignalOn;
	int dangerMagnitude;

	byte_t Serialize(void);
	static SignalData Deserialize(byte_t b);
};

#endif