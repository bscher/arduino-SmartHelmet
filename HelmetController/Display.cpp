#include "Display.h"

#include <U8glib.h>

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);  // I2C / TWI 

void Display::init(void)
{
	u8g.setScale2x2();
	u8g.setColorIndex(1);
	u8g.setFont(u8g_font_unifont);
}

void Display::draw(int magnitude)
{
	u8g.firstPage();
	do {
		u8g.setPrintPos(0, 10);
		// call procedure from base class, http://arduino.cc/en/Serial/Print
		u8g.print(magnitude);
		u8g.setPrintPos(0, 24);
		u8g.print("inches");
	} while(u8g.nextPage());
}