//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <cmath>

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
void __fastcall TForm1::CalculateBtnClick(TObject *Sender)
{
	Memo1->Clear();
    // Визначення початкового та кінцевого років
    const int startYear = 2011;
    const int endYear = 2022;
    const int numYears = endYear - startYear + 1;
    // Масив для зберігання виробництва протягом кожного року
    double production[numYears];
    // Обчислення виробництва для кожного року за заданою формулою
    for (int k = 0; k < numYears; ++k) {
        double year = startYear + k;
        production[k] = 100 * (2 * sin(year) * sin(4 * year - 1.4) * cos(2 * year + 1.5) - 7.1);
    }
	// Виведення заголовка таблиці
	Memo1->Lines->Add("|     Year      |    Number of products (thousands)   |");
    // Ініціалізація змінних для підрахунку статистики
    int profitableYearCount = 0;
    int maxProductionYear = 0;
    double maxProduction = 0;
	double lossProductionSum = 0;
	int lossProductionSumInt = 0;
    // Виведення даних про виробництво для кожного року
    for (int k = 0; k < numYears; ++k) {
        int year = startYear + k;
		double currentProduction = production[k];
		int currentProductionInt = (int)currentProduction;
		// Виведення даних у вигляді таблиці
		Memo1->Lines->Add("|     " + FloatToStr(year) + "     |                            " + IntToStr(currentProductionInt) + "                             |");
		// Підрахунок кількості років з прибутком та суми збиткових років
        if (currentProduction > 0) {
            profitableYearCount++;
        } else {
			lossProductionSum += currentProduction;
		}
        // Знаходження року з найбільшим виробництвом
        if (std::abs(currentProduction) > std::abs(maxProduction)) {
            maxProduction = currentProduction;
			maxProductionYear = year;
		}
        lossProductionSumInt = (int)lossProductionSum;
    }
	Memo1->Lines->Add("----------------------------------------------");
    // Виведення статистики
	Memo1->Lines->Add("Total number of years with profit: " + FloatToStr(profitableYearCount));
	Memo1->Lines->Add("The sum of the number of devices for unprofitable years: " + IntToStr(lossProductionSumInt));
	Memo1->Lines->Add("The year with the largest number of devices: " + FloatToStr(maxProductionYear));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CloseBtnClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
