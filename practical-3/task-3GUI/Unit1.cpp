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
	// Щкщлошення змінних для кількості продуктів
	double m1 = StrToFloat(Edit1->Text);
	double m2 = StrToFloat(Edit2->Text);
	double m3 = StrToFloat(Edit3->Text);

    // Оголошення змінних для цін на продукти
    double price_m1 = 40.90;
    double price_m2 = 62.40;
	double price_m3 = 144.10;

    // Обчислення сум для кожного продукту
	double total_m1 = m1 * price_m1;
	double total_m2 = m2 * price_m2;
	double total_m3 = m3 * price_m3;

    // Обчислення загальної суми
	double total = total_m1 + total_m2 + total_m3;

	// Виведення результатів
	Label4->Caption = "Amount for butter: " + FloatToStr(total_m1) + " uah";
	Label5->Caption = "Amount for mayonaise: " + FloatToStr(total_m2) + " uah";
	Label6->Caption = "Amount for cream: " + FloatToStr(total_m3) + " uah";
	Label7->Caption = "Total: " + FloatToStr(total) + " uah";
}
//---------------------------------------------------------------------------
