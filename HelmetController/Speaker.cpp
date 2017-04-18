#include "Speaker.h"

#define SPEAKER_PIN  6
#define DEFAULT_FREQ 2000
#define DEFAULT_DUR  250


void Speaker::init(void)
{
	pinMode(SPEAKER_PIN, OUTPUT);
}

void Speaker::play(void)
{
	tone(SPEAKER_PIN, DEFAULT_FREQ, DEFAULT_DUR);
}