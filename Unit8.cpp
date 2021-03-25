//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Plane.h"

#pragma package(smart_init)
#pragma resource "*.dfm"

TForm8 *Form8;

Plane A(10, 30, 50, 100, 8);

__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TForm8::Button1Click(TObject *Sender)
{
     A.show(Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button2Click(TObject *Sender)
{
	 A.hide(Canvas);
}


void __fastcall TForm8::Button3Click(TObject *Sender)
{
      A.move(Canvas,10,10);
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button4Click(TObject *Sender)
{
	  Timer1->Enabled = true;
}

void __fastcall TForm8::Timer1Timer(TObject *Sender)
{
    A.move(Canvas,2,2);
}
//---------------------------------------------------------------------------

