#include "Sensors.h"

#define VALUE_sensor_buffer_LEN	10
#define SELECT_DELAY		1
#define DANGER_READ_TO_MAG(n)	(5 - map((n < 50) ? n : 50, 10, 50, 0, 5))

#define RIGHT_SENSOR_1	0
#define RIGHT_SENSOR_2	1
#define RIGHT_SENSOR_3	2
#define RIGHT_SENSOR_4	3

#define LEFT_SENSOR_1	4
#define LEFT_SENSOR_2	5
#define LEFT_SENSOR_3	6
#define LEFT_SENSOR_4	7

pin_t pin_signalLeft;
pin_t pin_signalRight;
pin_t pin_sensorRead;
pin_t pin_sensorSelect_A;
pin_t pin_sensorSelect_B;
pin_t pin_sensorSelect_C;

static int sensor_buffer[8][5];

void bubble(int *arr, int size);
int median(int idx);
void push(int idx, int val);

void Sensors::init(
	pin_t pinSignalLeft,
	pin_t pinSignalRight,
	pin_t pinSensorRead,
	pin_t pinSensorSelect_A,
	pin_t pinSensorSelect_B,
	pin_t pinSensorSelect_C)
{
	pin_signalLeft = pinSignalLeft;
	pin_signalRight = pinSignalRight;
	pin_sensorRead = pinSensorRead;
	pin_sensorSelect_A = pinSensorSelect_A;
	pin_sensorSelect_B = pinSensorSelect_B;
	pin_sensorSelect_C = pinSensorSelect_C;

	pinMode(pin_sensorRead, INPUT);
	pinMode(pin_sensorSelect_A, OUTPUT);
	pinMode(pin_sensorSelect_B, OUTPUT);
	pinMode(pin_sensorSelect_C, OUTPUT);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sensor_buffer[i][j] = 0;
		}
	}
}

void setSelect(int n) {
	digitalWrite(pin_sensorSelect_A, ((n >> 0) & 0x1) ? HIGH : LOW);
	digitalWrite(pin_sensorSelect_B, ((n >> 1) & 0x1) ? HIGH : LOW);
	digitalWrite(pin_sensorSelect_C, ((n >> 2) & 0x1) ? HIGH : LOW);
	delay(SELECT_DELAY);
}

int getAvgRead(int a, int b, int c, int d) {
	int sensors[4] = { a, b, c, d };
	int readings[4];

	for (int i = 0; i < 4; i++)
	{
		setSelect(sensors[i]);
		
		readings[i] = analogRead(pin_sensorRead);

		debugPrint("   ");
		debugPrint(sensors[i]);
		debugPrint(": ");
		debugPrintln(readings[i]);

		push(sensors[i], readings[i]);
	}

	return min4(median(a), median(b), median(c), median(d));

}

void push(int idx, int val)
{
	for (unsigned int i = 4; i >= 1; i--)
	{
		sensor_buffer[idx][i] = sensor_buffer[idx][i - 1];
	}
	
	sensor_buffer[idx][0] = val;
}

void bubble(int *arr, int size)
{
	for (unsigned int i = 0; i < size - 1; i++)
	{
		for (unsigned int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int median(int idx)
{
	int temp[5];

	memcpy(temp, sensor_buffer[idx], 5*sizeof(int));

	bubble((int*)&temp, 5);
	
	return temp[2];
}

void Sensors::getReadings(SignalData & left, SignalData & right)
{
	int readLeft, readRight;
	
	//Left
	readLeft = getAvgRead(	LEFT_SENSOR_1,
							LEFT_SENSOR_2,
							LEFT_SENSOR_3,
							LEFT_SENSOR_4);
	debugPrint("Left reading: ");
	debugPrintln(readLeft);
	left = SignalData();
	left.refDirection = SignalData::LEFT;
	left.isTurnSignalOn = false;
	left.dangerMagnitude = DANGER_READ_TO_MAG(readLeft);

	//Right
	readRight = getAvgRead(	RIGHT_SENSOR_1,
							RIGHT_SENSOR_2,
							RIGHT_SENSOR_3,
							RIGHT_SENSOR_4);
	debugPrint("Right reading: ");
	debugPrintln(readRight);
	right = SignalData();
	right.refDirection = SignalData::RIGHT;
	right.isTurnSignalOn = false;
	right.dangerMagnitude = DANGER_READ_TO_MAG(readRight); 
	
	debugPrintln("---------------------------");
}