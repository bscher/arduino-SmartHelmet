#include "Display.h"
#include "U8glib.h"

U8GLIB_SSD1306_128X64 scr(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);  // I2C / TWI

void Display::init(void)
{
	scr.setScale2x2();
	scr.setColorIndex(1);
	//scr.setFont(u8g_font_unifont);
	scr.setFont(u8g_font_ncenB14);
}

void rightArrow(void) {
	scr.drawHLine(10, 7, 40);
	scr.drawHLine(10, 8, 40);
	scr.drawHLine(10, 9, 40);
	//scr.drawTriangle(117, 8, 100, 0, 100, 16);
	scr.drawTriangle(59, 8, 50, 0, 50, 16);
}


void Display::drawNoSignal(void) {

	scr.firstPage();
	do {
		scr.drawStr(5, 20, "Zzz...");
	} while (scr.nextPage());
}

void Display::draw(SignalData d)
{
	scr.firstPage();
	do {
		if (d.refDirection == SignalData::RIGHT) {

			char dangerStr[10] = { 0 };
			for (int i = 0; i < d.dangerMagnitude; i++)
				strcat(dangerStr, "*");
			scr.drawStr(10, 40, dangerStr);

			if (d.isTurnSignalOn) {
				rightArrow();
			}
			else {

			}
		}
		else
			;//TODO
	} while (scr.nextPage());
}