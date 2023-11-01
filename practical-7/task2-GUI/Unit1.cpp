//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#include <cmath> // Включення бібліотеки для математичних функцій
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
    Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    // ініціалізація змінних
    double i = 5;
    double a = 0;
    double b = 1;

    // Розрахунок за формулою суми
    for (int k = 1; k <= i+8; k++) {
        // Розрахунок за формулою №9
        double ak = cos(pow(k, 3) + 1) - fabs(sin(2 * k) - 5.5);
        a += ak;  // Додавання 'ak' до поточного значення 'a'.
    }

    // Розрахунок за формулою добутку
    for (int k = 1; k <= i+4; k++) {
        // Розрахунок за формулою №10
        double bk = sin(k) - cos(pow(k, 3)) * sin(pow(k, 2) - 4.24) + 4.24;
        b *= bk;  // Множення 'bk' на поточне значення 'b'.
    }

    double z = pow(0.1 * b, 2);  // Обчислення змінної 'z'.

    // Виведення результатів на екран.
	Memo1->Lines->Add("i = " + FloatToStr(i));
	Memo1->Lines->Add("a = " + FloatToStr(a));
	Memo1->Lines->Add("b = " + FloatToStr(b));
	Memo1->Lines->Add("z = " + FloatToStr(z));
}
//---------------------------------------------------------------------------
