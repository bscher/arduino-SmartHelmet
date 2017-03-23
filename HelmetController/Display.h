#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include "System.h"
#include "SignalData.h"
#include "U8glib.h"

namespace Display
{
	void init(void);

	void drawNoSignal(void);
	void draw(SignalData d);
};

#endif