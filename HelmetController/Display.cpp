#include "Display.h"

#define OLED_RESET 5
#define DEFAULT_COLOR 1

//U8GLIB_SSD1306_128X64 scr(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);  // I2C / TWI

Adafruit_SSD1306 scr1(OLED_RESET);
Adafruit_SSD1306 scr2(OLED_RESET);

void display_init(Adafruit_SSD1306 &disp)
{
	disp.setTextColor(DEFAULT_COLOR);
	disp.setFont();
}

void setDisplay_sleep(Adafruit_SSD1306 &disp)
{
	disp.clearDisplay();
	disp.setCursor(5, 20);
	disp.print(F("Zzz..."));
	disp.display();
}

void drawDisplay_rightArrow(Adafruit_SSD1306 &disp)
{
	disp.drawFastHLine(10, 7, 100, DEFAULT_COLOR);
	disp.drawFastHLine(10, 8, 100, DEFAULT_COLOR);
	disp.drawFastHLine(10, 9, 100, DEFAULT_COLOR);
	disp.drawTriangle(117, 8, 100, 0, 100, 16, DEFAULT_COLOR);
}

void setDisplay_rightDangerLevel(Adafruit_SSD1306 &disp, int dangerLevel, bool isTurnSignalOn)
{
	disp.clearDisplay();

	char dangerStr[10] = { 0 };
	for (int i = 0; i < dangerLevel; i++)
		strcat(dangerStr, "*");

	disp.setCursor( 73, 10);
	disp.print(dangerStr);

	if (isTurnSignalOn) {
		drawDisplay_rightArrow(disp);
	}
	if (dangerLevel >= 4 && isTurnSignalOn) {
		disp.setCursor(8, 44);
		disp.print(F("DANGER"));
	}

	disp.display();
}

void Display::init(void)
{
	scr1.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	scr2.begin(SSD1306_SWITCHCAPVCC, 0x3D);

	display_init(scr1);
	display_init(scr2);
}

void Display::drawNoSignal(void)
{
	setDisplay_sleep(scr1);
	setDisplay_sleep(scr2);
}

void Display::draw(SignalData d)
{
	if (d.refDirection == SignalData::RIGHT)
		setDisplay_rightDangerLevel(scr1, d.dangerMagnitude, d.isTurnSignalOn);
	else
		setDisplay_rightDangerLevel(scr2, d.dangerMagnitude, d.isTurnSignalOn);
}