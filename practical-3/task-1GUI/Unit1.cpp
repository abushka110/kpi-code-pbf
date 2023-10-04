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
    try
	{
		// Отримуємо введену температуру в Фаренгейтах з поля введення
		double fahrenheit = StrToFloat(Edit1->Text);
		//Конвертуємо температуру в градусах Фаренгейта в градуси Цельсія
		double celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

		// Виводимо результат з обмеженням до 4 знаків після коми на мітку
		Label2->Caption = "Temperature in degrees Celsius: " + FloatToStrF(celsius, ffFixed, 6, 2);
    }
    catch (Exception &ex)
    {
		// Обробка помилок вводу  та виведення повідомлення про помилку
		ShowMessage("Error: " + ex.Message);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	// Закриття вікна програми при натисканні на кнопку
	Close();
}
