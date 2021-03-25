//---------------------------------------------------------------------------

#pragma hdrstop

#include "Plane.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

 void Plane::show(TCanvas *Canvas)
 {
	  Figure::show(Canvas);
	  Canvas->Brush->Color=clGray;
      Canvas->Pen->Color=clBlack;
	  Canvas->Rectangle(x0 + width/4, y0 + height/2, x0 + width*0.75, y0 + width*0.75);
	  Canvas->Rectangle(x0 + width/4, y0, x0 + width*0.75, y0 - height*0.25);
	  Canvas->Brush->Color=clBlack;
	  Canvas->Ellipse(xc-radius, yc, xc+radius, yc-2*radius);
 }

 void Plane::hide(TCanvas *Canvas)
 {
	   Figure::hide(Canvas);
	   Canvas->Brush->Color=clWhite;
	   Canvas->Pen->Color=clWhite;
	   Canvas->Rectangle(x0 + width/4, y0 + height/2, x0 + width*0.75, y0 + width*0.75);
	   Canvas->Rectangle(x0 + width/4, y0, x0 + width*0.75, y0 - height*0.25);
	   Canvas->Ellipse(xc-radius, yc, xc+radius, yc-2*radius);
	   Canvas->Brush->Color=clGray;
	   Canvas->Pen->Color=clBlack;
 }

 void Plane::move(TCanvas *Canvas, int x, int y)
{
	if(y0<170)
	{
         Plane::hide(Canvas);
		 x0 += x;
		 y0 += y;
		 if (y0>150)
		 {
			 yc += y+1.3;
			 xc += x;
		 } else
		 {
			 xc += x;
			 yc += y;
		 }
		 Plane::show(Canvas);
	} else if(x0<300)
	{
		Plane::hide(Canvas);
		x0 += x+3;
        xc += x+3;
        Plane::show(Canvas);
    }

}

