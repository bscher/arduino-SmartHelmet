#ifndef _COMMCLIENT_H_
#define _COMMCLIENT_H_

#include "System.h"

#define COMM_SERIAL_BAUD 9600

namespace CommClient 
{
	void init(void);

	void send(const char *str);
	void send(const char *buffer, unsigned int len);
	int receive(char *buffer, unsigned int len);

	namespace Pins
	{
		extern const uint8_t COMM_RX;
		extern const uint8_t COMM_TX;
	};
};

#endif