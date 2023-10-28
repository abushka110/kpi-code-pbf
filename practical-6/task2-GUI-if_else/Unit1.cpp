//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
#include <cmath>
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



	// Обчислюємо прибуток та затрати на амортизацію в залежності від вибраного підрозділу
	if (RadioGroup1->ItemIndex==0) {
		profit = CalculateAlphaProfit(x); // Викликаємо функцію для обчислення прибутку для alpha
        depreciation = 0.2 * profit;      // Обчислюємо затрати на амортизацію
	} else if (RadioGroup1->ItemIndex==1) {
        profit = CalculateBetaProfit(x);  // Викликаємо функцію для обчислення прибутку для beta
        depreciation = 0.3 * profit;      // Обчислюємо затрати на амортизацію
	} else if (RadioGroup1->ItemIndex==2) {
        profit = CalculateGammaProfit(x); // Викликаємо функцію для обчислення прибутку для gamma
		depreciation = 0.4 * profit;      // Обчислюємо затрати на амортизацію
	} else {
		ShowMessage("Please select a division");
	}
	double fullSum = profit - depreciation;
	Label2->Caption = "Profit: " + FloatToStr(profit)  + "\nDepreciation costs: " + FloatToStr(depreciation) + "\nTotal profit: " + FloatToStr(fullSum);


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
