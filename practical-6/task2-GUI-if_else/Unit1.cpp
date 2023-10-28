#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
#include <cmath>  // Підключення бібліотеки для математичних функцій
//---------------------------------------------------------------------------

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
// Функція обчислення нарахованої суми для альфа  підрозділу
double CalculateAlphaProfit(double x) {
	return 100 * fabs(cos(fabs(2 * x) / 2.15 - cos(3 * x - 3) + 10) + 100);
}

// Функція обчислення нарахованої суми для бета  підрозділу
double CalculateBetaProfit(double x) {
	return 120 * fabs(sin(x) * sin(x + 2) * cos(x * x) / 0.44 + 11.4 + 120);
}

// Функція обчислення нарахованої суми для гамма підрозділу
double CalculateGammaProfit(double x) {
	return 130 * fabs(fabs(3 * sin(3 * x) + sin(2 * x - 1.8)) + 3.45) + 130;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    // оголошення змінних для варіанту, нарахованої суми та амортизації
	double x = 5;
	double profit;
	double depreciation;

	if (RadioGroup1->ItemIndex == 0) {
		profit = CalculateAlphaProfit(x);  // Обчислення нарахованої суми для альфа
        depreciation = 0.2 * profit;  // Обчислення витрат на амортизацію
	} else if (RadioGroup1->ItemIndex == 1) {
		profit = CalculateBetaProfit(x);  // Обчислення нарахованої суми для бета
        depreciation = 0.3 * profit;  // Обчислення витрат на амортизацію
	} else if (RadioGroup1->ItemIndex == 2) {
		profit = CalculateGammaProfit(x);  // Обчислення нарахованої суми для гамма
		depreciation = 0.4 * profit;  // Обчислення витрат на амортизацію
	} else {
		ShowMessage("Please select a division");  // Виведення повідомлення, якщо підрозділ не обраний
	}
	// розрахунок прибутку
	double fullSum = profit - depreciation;
	// Виведення нарахованої суми, амортизації та прибутку
	Label2->Caption = "Profit: " + FloatToStr(profit)  + "\nDepreciation costs: " + FloatToStr(depreciation) + "\nTotal profit: " + FloatToStr(fullSum);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Close();  // Закриття програми
}
//---------------------------------------------------------------------------

