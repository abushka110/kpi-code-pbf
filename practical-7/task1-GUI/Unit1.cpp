//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Memo1->Clear();

	double startValue = StrToFloat(Edit1->Text);
	double stepSize = StrToFloat(Edit2->Text);
	int rowCount = StrToFloat(Edit3->Text);

	Memo1->Lines->Add("Standart                  Roda       Cubic Meter");

	for (int i = 0; i < rowCount; i++) {
		double standard = startValue + i * stepSize;
		double roda = standard * 0.165;
		double cubicMeter = standard * 4.672;
		Memo1->Lines->Add(FloatToStr(standard) + "                  " + FloatToStr(roda) + "       " + FloatToStr(cubicMeter));
	}




}
//---------------------------------------------------------------------------
