#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
#include <cmath> // Підключення бібліотеки для математичних функцій
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
// Функція для обчислення прибутку для підрозділу alpha
double CalculateAlphaProfit(double x) {
	return 100 * fabs(cos(fabs(2 * x) / 2.15 - cos(3 * x - 3) + 10) + 100); // Обчислюємо прибуток для підрозділу alpha
}
// Функція для обчислення прибутку для підрозділу beta
double CalculateBetaProfit(double x) {
	return 120 * fabs(sin(x) * sin(x + 2) * cos(x * x) / 0.44 + 11.4 + 120); // Обчислюємо прибуток для підрозділу beta
}
// Функція для обчислення прибутку для підрозділу gamma
double CalculateGammaProfit(double x) {
	return 130 * fabs(fabs(3 * sin(3 * x) + sin(2 * x - 1.8)) + 3.45) + 130; // Обчислюємо прибуток для підрозділу gamma
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	double x = 5;
	double profit;
	double depreciation;
	switch (RadioGroup1->ItemIndex) {  // Розгалуження в залежності від вибору користувача.
		case 0:
			profit = CalculateAlphaProfit(x); // Обчислення нарахованої суми для альфа
			depreciation = 0.2 * profit;    // Обчислення витрат на амортизацію
            break;
		case 1:
			profit = CalculateBetaProfit(x);  // Обчислення нарахованої суми для альфа
			depreciation = 0.3 * profit;  // Обчислення витрат на амортизацію
            break;
		case 2:
			profit = CalculateGammaProfit(x);     // Обчислення нарахованої суми для альфа
			depreciation = 0.4 * profit;   // Обчислення нарахованої суми для альфа
			break;
		default:
			ShowMessage("Неправильний номер варіанту. Введіть 1, 2 або 3.");
	}
	// Обчислення нарахованої суми для альфа
	double fullSum = profit - depreciation;
	// Обчислення нарахованої суми для альфа
	Label2->Caption = "Profit: " + FloatToStr(profit)  + "\nDepreciation costs: " + FloatToStr(depreciation) + "\nTotal profit: " + FloatToStr(fullSum);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Close(); // Обчислення нарахованої суми для альфа
}
//---------------------------------------------------------------------------

