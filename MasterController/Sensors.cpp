#include "Sensors.h"

//#define DANGER_READ_TO_MAG(n)	(5 - map((n < 255) ? n : 255, 6, 255, 0, 5))
#define MAP_MAX			60
#define MAP_MIN			12
#define DANGER_READ_TO_MAG(n)	(5 - map((n < MAP_MAX) ? n : MAP_MAX, MAP_MIN, MAP_MAX, 0, 5))
#define SELECT_DELAY	1

#define RIGHT_SENSOR_1	0
#define RIGHT_SENSOR_2	1
#define RIGHT_SENSOR_3	2
#define RIGHT_SENSOR_4	3

#define LEFT_SENSOR_1	4
#define LEFT_SENSOR_2	5
#define LEFT_SENSOR_3	6
#define LEFT_SENSOR_4	7

#define NUM_SENSORS		8
#define BUFFER_LEN		5

#define SENSOR_RX_PIN	12

pin_t pin_sensorRead;
pin_t pin_sensorSelect_A;
pin_t pin_sensorSelect_B;
pin_t pin_sensorSelect_C;

static int sensor_buffer[NUM_SENSORS][BUFFER_LEN];

int median(int idx);
void push(int idx, int val);

void Sensors::init(
	pin_t pinSensorRead,
	pin_t pinSensorSelect_A,
	pin_t pinSensorSelect_B,
	pin_t pinSensorSelect_C)
{
	pin_sensorRead = pinSensorRead;
	pin_sensorSelect_A = pinSensorSelect_A;
	pin_sensorSelect_B = pinSensorSelect_B;
	pin_sensorSelect_C = pinSensorSelect_C;

	pinMode(pin_sensorRead, INPUT);
	pinMode(pin_sensorSelect_A, OUTPUT);
	pinMode(pin_sensorSelect_B, OUTPUT);
	pinMode(pin_sensorSelect_C, OUTPUT);

	for (int i = 0; i < NUM_SENSORS; i++)
		for (int j = 0; j < BUFFER_LEN; j++)
			sensor_buffer[i][j] = 0;

	// Set sensor rx output pin (D12)
	pinMode(SENSOR_RX_PIN, OUTPUT);
	digitalWrite(SENSOR_RX_PIN, LOW);

	pulseChain();
}

void setSelect(int n) {
	digitalWrite(pin_sensorSelect_A, ((n >> 0) & 0x1) ? HIGH : LOW);
	digitalWrite(pin_sensorSelect_B, ((n >> 1) & 0x1) ? HIGH : LOW);
	digitalWrite(pin_sensorSelect_C, ((n >> 2) & 0x1) ? HIGH : LOW);
	delay(3);
}

int getAvgRead(int a, int b, int c, int d) {
	int sensors[4] = { a, b, c, d };
	int readings[4];

	for (int i = 0; i < 4; i++)
	{
		setSelect(sensors[i]);

		readings[i] = analogRead(pin_sensorRead);
		//if (readings[i] < MAP_MIN)
		//	readings[i] = 200;

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
	for (unsigned int i = BUFFER_LEN - 1; i >= 1; i--)
		sensor_buffer[idx][i] = sensor_buffer[idx][i - 1];

	sensor_buffer[idx][0] = val;
}

int median(int idx)
{
	int temp[BUFFER_LEN];

	for (int i = 0; i < BUFFER_LEN; i++)
	{
		temp[i] = sensor_buffer[idx][i];
	}

	//Bubble
	for (int i = 0; i < BUFFER_LEN - 1; i++)
		for (int j = i + 1; j < BUFFER_LEN; j++)
			if (temp[j] > temp[i])
			{
				int t = temp[i];
				temp[i] = temp[j];
				temp[j] = t;
			}

	return temp[BUFFER_LEN / 2];
}

void Sensors::getReadings(SignalData & left, SignalData & right)
{
	int readLeft, readRight;

	//Left
	readLeft = getAvgRead(LEFT_SENSOR_1,
		LEFT_SENSOR_2,
		LEFT_SENSOR_3,
		LEFT_SENSOR_4);
	debugPrint("Left reading: ");
	debugPrintln(readLeft);
	left = SignalData();
	left.refDirection = SignalData::LEFT;
	left.isTurnSignalOn = TurnSignal::isTurnSignalOn(SignalData::LEFT);
	left.dangerMagnitude = DANGER_READ_TO_MAG(readLeft);

	//Right
	readRight = getAvgRead(RIGHT_SENSOR_1,
		RIGHT_SENSOR_2,
		RIGHT_SENSOR_3,
		RIGHT_SENSOR_4);
	debugPrint("Right reading: ");
	debugPrintln(readRight);
	right = SignalData();
	right.refDirection = SignalData::RIGHT;
	right.isTurnSignalOn = TurnSignal::isTurnSignalOn(SignalData::RIGHT);
	right.dangerMagnitude = DANGER_READ_TO_MAG(readRight);

	debugPrintln("---------------------------");
}

void Sensors::pulseChain(void)
{
	// Start continuous chain
	digitalWrite(SENSOR_RX_PIN, HIGH);
	delay(40);
	digitalWrite(SENSOR_RX_PIN, LOW);
}
