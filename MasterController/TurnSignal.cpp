#include "TurnSignal.h"

pin_t pin_signalLeft;
pin_t pin_signalRight;

void TurnSignal::init(pin_t pinSignalLeft, pin_t pinSignalRight)
{
	pin_signalLeft = pinSignalLeft;
	pin_signalRight = pinSignalRight;

	pinMode(pin_signalLeft, INPUT);
	pinMode(pin_signalRight, INPUT);

	int initialRead;

	initialRead = analogRead(pin_signalLeft);
	debugPrint("  first left turn signal reading: ");
	debugPrintln(initialRead);

	initialRead = analogRead(pin_signalRight);
	debugPrint("  first right turn signal reading: ");
	debugPrintln(initialRead);
}

bool TurnSignal::isTurnSignalOn(SignalData::Direction dir)
{
	if (dir == SignalData::LEFT)
		return analogRead(pin_signalLeft) >= 150;
	
	else if (dir == SignalData::RIGHT)
		return analogRead(pin_signalRight) >= 150;
	
	else
	{
		debugPrintln("ERROR: could not identify turn signal direction...");
		return false;
	}
}
