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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	try
    {
        double alpha = StrToFloat(Edit1->Text); // Отримуємо значення кута alpha

		double z1 = 1 - (1.0 / 4) * pow(sin(2 * alpha), 2) + cos(2 * alpha);
		double z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);

        // Виводимо результати на мітки
		Label2->Caption = "The result according to the first formula (z1): " + FloatToStr(z1);
		Label3->Caption = "The result according to the second formula (z2): " + FloatToStr(z2);

		// Перевірка на співпадіння результатів
        if (fabs(z1 - z2) < 1e-6) // Використовуємо допустиму похибку
        {
			Label4->Caption = "The results match.";
        }
        else
        {
			Label4->Caption = "The results do not match.";
        }
    }
    catch (Exception &ex)
	{
		ShowMessage("Error: " + ex.Message);   // Обробка помилок вводу
	}
}


//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	// Закриття вікна програми при натисканні на кнопку
	Close();
}
