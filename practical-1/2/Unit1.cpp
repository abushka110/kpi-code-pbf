// підключення файлу бібліотеки візуальних компонентів
#include <vcl.h>
// зупинка обробки заголовного файлу
#pragma hdrstop

// підключення спеціального фійлу заголовку для форми
#include "Unit1.h"
// розумна ініціалізація пакетів
#pragma package(smart_init)
// призначення ресурсу для дизайну форму
#pragma resource "*.dfm"
// створення екземпляра TForm1 під назвою Form1
TForm1 *Form1;
// конструктор для класу TForm1
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
// Обробник події Button1Click
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	// зміна тексту заголовку Label1
	Label1->Caption="Glory to the heroes!!!";
	// зміна кольору заголовку Label1
	Label1->Font->Color=clYellow;
}
//---------------------------------------------------------------------------
