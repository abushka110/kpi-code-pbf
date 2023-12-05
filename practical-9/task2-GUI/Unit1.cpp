//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <cmath>
#include <vector>

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
void __fastcall TForm1::CloseBtnClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CalculateBtnClick(TObject *Sender)
{
	Memo1->Clear();

    // Оголошення та ініціалізація константи, що визначає розмір масиву
    const int size = 10;

    // Оголошення масиву типу double
    double y[size];

    // Заповнення масиву за допомогою циклу з обчисленням математичного виразу
    for (int k = 1; k <= size; ++k) {
        y[k - 1] = fabs(pow(cos(k), 2) - 1.25) * sin(3 * k - 4.44) + 4.44;
    }

    // Виведення заголовка перед виведенням масиву y
	Memo1->Lines->Add("Array y:");

    // Виведення кожного елементу масиву у разом з індексом
	for (int i = 0; i < size; ++i) {
		Memo1->Lines->Add("y[" + FloatToStr(i + 1) + "] = " + y[i]);
	}

    // Знаходження максимального елементу в масиві y
    double maxElement = y[0];
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (y[i] > maxElement) {
            maxElement = y[i];
            maxIndex = i;
        }
    }

    // Занесення всіх додатніх елементів масиву y, крім максимального, в окремий масив
	std::vector<double> positiveElements;
    for (double i : y) {
        if (i > 0 && i < maxElement) {
            positiveElements.push_back(i);
        }
    }

    // Виведення максимального елементу масиву y
	Memo1->Lines->Add("Max element: y[" + FloatToStr(maxIndex + 1) + "] = " + FloatToStr(maxElement));

    // Виведення першого додатнього елементу масиву y
    for (int i = 0; i < size; ++i) {
        if (y[i] > 0) {
			Memo1->Lines->Add("1st positive element: y[" + FloatToStr(i + 1) + "] = " + y[i] );
            break;
        }
    }

    // Виведення другого масиву, якщо він не пустий
    if (positiveElements.empty()) {
		Memo1->Lines->Add("There are no positive elements (except the maximum).");
    } else {
		Memo1->Lines->Add("Positive elements (except the maximum):");
        for (int i = 0; i < size; ++i) {
            if (y[i] > 0 && y[i] < maxElement) {
				Memo1->Lines->Add("y[" + FloatToStr( i + 1 ) + "] = " + y[i] );
            }
        }
	}
}
//---------------------------------------------------------------------------
