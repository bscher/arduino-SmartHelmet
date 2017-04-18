#include "Display.h"
#include "DisplayGraphics.h"

#define OLED_RESET 5
#define DEFAULT_COLOR 1

//U8GLIB_SSD1306_128X64 scr(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);  // I2C / TWI

Adafruit_SSD1306 scr1(OLED_RESET);
Adafruit_SSD1306 scr2(OLED_RESET);

void Display::init(void);
void display_init(Adafruit_SSD1306 &disp);
void setDisplay_sleep(Adafruit_SSD1306 &disp);
void displayNoIO(Adafruit_SSD1306 &disp);
void setDisplay_leftDangerLevel(Adafruit_SSD1306 &disp, int dangerLevel, bool isTurnSignalOn);
void setDisplay_rightDangerLevel(Adafruit_SSD1306 &disp, int dangerLevel, bool isTurnSignalOn);
void Display::drawNoSignal(void);
void Display::draw(SignalData d);

void Display::init(void)
{
	scr1.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	scr2.begin(SSD1306_SWITCHCAPVCC, 0x3D);

	display_init(scr1);
	display_init(scr2);

	delay(1500);
}

void display_init(Adafruit_SSD1306 &disp)
{
	disp.clearDisplay();
	disp.setTextColor(DEFAULT_COLOR);
	disp.setFont(&FreeMonoBoldOblique12pt7b);
	//disp.setTextSize(1);
	disp.setCursor(0, 0);
	disp.setRotation(2);
	disp.drawBitmap(0, 0, (const uint8_t*)&splashScreen, 128, 32, DEFAULT_COLOR);	
	disp.display();
}

void setDisplay_sleep(Adafruit_SSD1306 &disp)
{
	disp.clearDisplay();
	disp.setCursor(5, 20);
	displayNoIO(disp);
}

void displayNoIO(Adafruit_SSD1306 &disp)
{
	disp.clearDisplay();
	disp.setCursor(0, 0);

	disp.drawBitmap(0, 0, (const uint8_t*)&noSignal_1, 128, 32, DEFAULT_COLOR);
	disp.display();
	delay(150);

	disp.drawBitmap(0, 0, (const uint8_t*)&noSignal_2, 128, 32, DEFAULT_COLOR);
	disp.display();
	delay(150);

	disp.drawBitmap(0, 0, (const uint8_t*)&noSignal_3, 128, 32, DEFAULT_COLOR);
	disp.display();
	delay(150);

	disp.drawBitmap(0, 0, (const uint8_t*)&noSignal_4, 128, 32, DEFAULT_COLOR);
	disp.display();
	delay(150);
}

void drawDisplay_rightArrow(Adafruit_SSD1306 &disp)
{
	disp.drawFastHLine(10, 7, 100, DEFAULT_COLOR);
	disp.drawFastHLine(10, 8, 100, DEFAULT_COLOR);
	disp.drawFastHLine(10, 9, 100, DEFAULT_COLOR);
	disp.drawTriangle(117, 8, 100, 0, 100, 16, DEFAULT_COLOR);
}

void setDisplay_leftDangerLevel(Adafruit_SSD1306 &disp, int dangerLevel, bool isTurnSignalOn)
{
	disp.clearDisplay();

	char dangerStr[10] = { 0 };
	for (int i = 0; i < dangerLevel; i++) {
		if (i == dangerLevel - 1)
			strcat(dangerStr, "<");
		else
			strcat(dangerStr, "< ");
	}

	disp.setCursor(0, 15);
	disp.print(dangerStr);

	if (dangerLevel >= 4 && isTurnSignalOn) {
		disp.setCursor(18, 32);
		disp.print(F("DANGER!"));
	}

	disp.display();
}

void setDisplay_rightDangerLevel(Adafruit_SSD1306 &disp, int dangerLevel, bool isTurnSignalOn)
{
	disp.clearDisplay();

	char dangerStr[10] = { 0 };
	for (int i = 0; i < dangerLevel; i++)
	{
		if (i == dangerLevel - 1)
			strcat(dangerStr, ">");
		else
			strcat(dangerStr, "> ");
	}

	disp.setCursor(0, 15);
	disp.print(dangerStr);

	if (dangerLevel >= 4 && isTurnSignalOn) {
		disp.setCursor(18, 32);
		disp.print(F("DANGER!"));
	}

	disp.display();
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
		setDisplay_leftDangerLevel(scr2, d.dangerMagnitude, d.isTurnSignalOn);
}

void Display::testGraphics(void)
{
	testArrows(scr1, 0);
	testArrows(scr2, 1);
}

void Display::testArrows(Adafruit_SSD1306 disp, int dir) //dir: 0-left, 1-right
{
	char str[10] = "";
	char danger[10] = "DANGER!";

	for (int i = 0; i < 6; i++)
	{
		if (i != 0)
		{
			if (dir == 0) // left
			{
				if (i == 5)
					strcat(str, "<");
				else
					strcat(str, "< ");
			}
			else // right
			{
				if (i == 5)
					strcat(str, ">");
				else
					strcat(str, "> ");
			}
		}

		disp.clearDisplay();
		disp.setCursor(0, 15);
		disp.print(str);

		if (i == 5)
		{
			disp.setCursor(18, 32);
			disp.print(danger);
		}
		
		disp.display();

		//delay(1000);
	}
}