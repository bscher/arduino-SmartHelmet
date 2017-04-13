#ifndef _COMMCLIENT_H_
#define _COMMCLIENT_H_

#include "System.h"
#include "SignalData.h"
#include <SoftwareSerial.h>
//#include "AltSoftSerial.h"

#define COMM_SERIAL_BAUD 9600

namespace CommClient 
{
	void init(pin_t commRXPin, pin_t commTXPin);

	void sendSignalData(SignalData data);
	void send(const char *str);
	void send(const char *buffer, unsigned int len);

	bool tryReceiveSignalData(SignalData &data);
	int receive(char *buffer, unsigned int len);
};

#endif