#include "SignalData.h"

byte_t SignalData::Serialize(void)
{
	byte_t b;

	b |= (refDirection & 0x1);
	b |= ((isTurnSignalOn & 0x1) << 1);
	b |= ((dangerMagnitude & 0x7) << 2);

	return b;
}

SignalData SignalData::Deserialize(byte_t b)
{
	SignalData data;

	data.refDirection = (Direction)(b & 0x1);
	data.isTurnSignalOn = ((b >> 1) & 0x1);
	data.dangerMagnitude = ((b >> 2) & 0x7);

	return data;
}
