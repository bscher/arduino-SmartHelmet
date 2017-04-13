
#include "CommClient.h"

SoftwareSerial *comSerial = nullptr;
//AltSoftSerial *comSerial = nullptr;

void CommClient::init(pin_t commRXPin, pin_t commTXPin)
{
	comSerial = //new AltSoftSerial(
		new SoftwareSerial(
			commRXPin, commTXPin);
	comSerial->begin(COMM_SERIAL_BAUD);
}

void CommClient::sendSignalData(SignalData data)
{
	const char out[] = { data.Serialize() };
	send(out, 1);
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

bool CommClient::tryReceiveSignalData(SignalData &data)
{
	char buff[1];
	if (receive(buff, 1)) {
		data = SignalData::Deserialize(buff[0]);
		return true;
	}
	else
		return false;
}

int CommClient::receive(char * buffer, unsigned int len)
{
	int i = 0;
	while (comSerial->available() && i < len) {
		int in = comSerial->read();
		buffer[i++] = in;
	}
	return i;
}