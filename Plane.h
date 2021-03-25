//---------------------------------------------------------------------------

#ifndef PlaneH
#define PlaneH
//---------------------------------------------------------------------------
#endif

#include "Rectangle.h"
#include <vcl.h>

class Plane: private Figure
{private:
	 int radius;
	 float xc, yc;
public:
	 Plane(int x, int y, int h, int w, int r) : Figure(x, y, h, w)
	 {
		 xc = x0 + width*0.18;
		 yc = y0 + height;
		 radius = r;
	 }

	 void show(TCanvas *Canvas);

	 void hide(TCanvas *Canvas);

	 void move(TCanvas *Canvas, int x, int y);

};