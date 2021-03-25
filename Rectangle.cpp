//---------------------------------------------------------------------------

#pragma hdrstop

#include "Rectangle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Figure::show(TCanvas *Canvas)
{
	Canvas->Brush->Color=clBlack;
	Canvas->Rectangle(x0, y0, x0 + width, y0 + height);
}

void Figure::hide(TCanvas *Canvas)
{
	Canvas->Brush->Color=clWhite;
	Canvas->Pen->Color=clWhite;
	Canvas->Rectangle(x0, y0, x0 + width, y0 + height);
	Canvas->Brush->Color=clBlack;
	Canvas->Pen->Color=clBlack;
}

void Figure::move(TCanvas *Canvas, int x, int y)
{
	hide(Canvas);
	x0 += x;
	y0 += y;
	show(Canvas);
}
