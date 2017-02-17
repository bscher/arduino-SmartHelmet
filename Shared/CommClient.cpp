
#include "CommClient.h"
#include "AltSoftSerial.h"


AltSoftSerial *comSerial;

void CommClient::init()
{
	comSerial = new AltSoftSerial(System::Pins::COMM_RX, System::Pins::COMM_TX);
	comSerial->begin(COMM_SERIAL_BAUD);
}

void CommClient::send(const char * str)
{
	comSerial->print(str);
	comSerial->flush();
}

void CommClient::send(const char * buffer, unsigned int len)
{
	for (int i = 0; i < len; i++) {
		comSerial->write(buffer[i]);
	}
	comSerial->flush();
}

int CommClient::receive(char * buffer, unsigned int len)
{
	int i = 0;
	while (comSerial->available() && i < len) {
		buffer[i++] = comSerial->read();
	}
	return i;
}
