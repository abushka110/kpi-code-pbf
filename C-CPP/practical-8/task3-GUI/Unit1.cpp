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
// Функція, яка обчислює значення функції для заданого аргументу x
double f(double x) {
    return 4.31 + pow(cos(x), 2) * sin(2 * x - 2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	double x_start = StrToFloat(Edit1->Text);
	double x_end = StrToFloat(Edit2->Text);
	double dx = StrToFloat(Edit3->Text);

    // Ініціалізація змінних для обчислення суми та кількості додатних значень
    double x = x_start;
    int count = 0;
    double sum = 0;
	// Виведення заголовка для таблиці
	Memo1->Lines->Add("x - argument y - function value");
    // Цикл для обчислення та виведення значень функції
    while (x <= x_end) {
        double y = f(x);
        // Перевірка, чи значення функції додатнє
        if (y > 0) {
            count++;  // Якщо так, збільшити лічильник
            sum += y;  // Додати значення до суми
        }
		// Виведення значень x та y
		Memo1->Lines->Add("x = " + FloatToStr(x) + " y = " + FloatToStr(y));
        // Збільшення значення x на крок dx
		x += dx;
    }
	// Виведення суми та кількості додатних значень функції
	Memo1->Lines->Add("The sum of positive values of a function: " + FloatToStr(sum));
	Memo1->Lines->Add("Number of positive values of the function: " + FloatToStr(count));
}
//---------------------------------------------------------------------------
