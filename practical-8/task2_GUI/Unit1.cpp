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
// Ряд Тейлора для функції ln((1+x)/(1-x))
double ln_taylor(double x, int n) {
    double sum = 2 * x; // Початкове значення суми ряду
    for (int i = 1; i <= n; i++) {
        sum += pow(x, 2 * i + 1) / (2 * i + 1); // Додавання наступного члена ряду Тейлора
    }
    return sum;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	// Введення даних
	double x_start = StrToFloat(Edit1->Text);
	double x_end = StrToFloat(Edit2->Text);
	double dx = StrToFloat(Edit3->Text);
	double eps = StrToFloat(Edit4->Text);

    // Розрахунок та виведення результату для кожного значення x
    for (double x = x_start; x <= x_end; x += dx) {
        // Підрахунок кількості членів ряду
        int n = 0;
        double prev_sum = 0;
        double cur_sum = ln_taylor(x, n);

        // Пошук кількості членів ряду, щоб досягти необхідної точності eps
        while (fabs(cur_sum - prev_sum) > eps) {
            n++;
            prev_sum = cur_sum;
            cur_sum = ln_taylor(x, n);
		}

		// Виведення результату
		Memo1->Lines->Add("x = " + FloatToStr(x) + ", ln((1+x)/(1-x)) = " + FloatToStr(cur_sum) + ", n = " + FloatToStr(n));
	}
}
//---------------------------------------------------------------------------
