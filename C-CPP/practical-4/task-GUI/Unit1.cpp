//---------------------------------------------------------------------------
#include <vcl.h> // Підключення бібліотеки VCL (Visual Component Library)
#pragma hdrstop

#include "Unit1.h" // Підключення заголовочного файлу Unit1
#include "Unit2.h" // Підключення заголовочного файлу Unit2
#include "Unit3.h" // Підключення заголовочного файлу Unit3
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
void __fastcall TForm1::BtnAddToOtherFormsClick(TObject *Sender)
{
	String textEditUnit1 = EditUnit1->Text; // Отримання тексту з EditUnit1

	Form2->Show(); // Відображення Form2
	Form3->Show(); // Відображення Form3

	Form2->EditUnit2->Text = textEditUnit1; // Передача тексту в EditUnit2 на Form2
	Form3->EditUnit3->Text = textEditUnit1; // Передача тексту в EditUnit3 на Form3
}
//---------------------------------------------------------------------------
