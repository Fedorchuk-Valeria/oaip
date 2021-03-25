//---------------------------------------------------------------------------

#ifndef RectangleH
#define RectangleH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>


class Figure
{ protected:
	 int x0, y0, height, width;
  public:
	 Figure (int x, int y, int h, int w)
	 {
		 x0 = x;
		 y0 = y;
		 height = h;
		 width = w;
	 }

  void show(TCanvas *Canvas);

  void hide(TCanvas *Canvas);

  void move(TCanvas *Canvas, int x, int y);


};



