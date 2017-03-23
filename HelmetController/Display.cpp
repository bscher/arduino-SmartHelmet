#include "Display.h"

U8GLIB_SSD1306_128X64 scr(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);  // I2C / TWI

void Display::init(void)
{
	//scr.setScale2x2();
	scr.setColorIndex(1);
	//scr.setFont(u8g_font_unifont);
	scr.setFont(u8g_font_ncenB24);
}

void rightArrow(void) {
	scr.drawHLine(10, 7, 100);
	scr.drawHLine(10, 8, 100);
	scr.drawHLine(10, 9, 100);
	scr.drawTriangle(117, 8, 100, 0, 100, 16);
	//scr.drawTriangle(59, 8, 50, 0, 50, 16);
}

void Display::drawNoSignal(void) {

	scr.firstPage();
	do {
		scr.drawStr(5, 20, "Zzz...");
	} while (scr.nextPage());
}

void Display::draw(SignalData d)
{
	if (d.refDirection == SignalData::RIGHT) {
		scr.firstPage();
		do {

			char dangerStr[10] = { 0 };
			for (int i = 0; i < d.dangerMagnitude; i++)
				strcat(dangerStr, "*");
			scr.drawStr(10, 73, dangerStr);

			if (d.isTurnSignalOn) {
				rightArrow();
			}
			if (d.dangerMagnitude >= 5 && d.isTurnSignalOn) {
				scr.setFont(u8g_font_fur20);
				scr.drawStr(8, 44, "DANGER");
				scr.setFont(u8g_font_ncenB24);
			}
		} while (scr.nextPage());
	}
	else
		;//TODO
}