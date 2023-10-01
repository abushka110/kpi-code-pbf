// Включення необхідних бібліотек і зупинка компілятора для оптимізації
#include <vcl.h>
#pragma hdrstop

// Підключення заголовочного файлу "Unit1.h", який містить опис класу TForm1
#include "Unit1.h"

// Встановлення параметрів компіляції та підключення графічних ресурсів
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// Конструктор класу TForm1
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

// Обробник події кліку для кнопки Button1 (сума)
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	// Оголошення змінних a, b і sum
	float a,b,sum;

	// Отримання значень з полів LabeledEdit1 і LabeledEdit2 та конвертація їх в числа з плаваючою комою
	a=StrToFloat(LabeledEdit1->Text);
	b=StrToFloat(LabeledEdit2->Text);

	// // Обчислення суми a і b
	sum=a+b;

	// Встановлення тексту панелі Panel1 для відображення результату обчислення
	Panel1->Caption= LabeledEdit1->Text + " + " + LabeledEdit2->Text + " = " +FloatToStr(sum);
}

// Обробник події кліку для кнопки Button2 (різниця)
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	// Оголошення змінних a, b і sub
	float a,b,sub;

	// Отримання значень з полів LabeledEdit1 і LabeledEdit2 та конвертація їх в числа з плаваючою комою
	a=StrToFloat(LabeledEdit1->Text);
	b=StrToFloat(LabeledEdit2->Text);

	// // Обчислення різниці a і b
	sub=a-b;

	// Встановлення тексту панелі Panel1 для відображення результату обчислення
	Panel1->Caption= LabeledEdit1->Text + " - " + LabeledEdit2->Text + " = " + FloatToStr(sub);
}

// Обробник події кліку для кнопки Button3 (добуток)
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	// Оголошення змінних a, b і mult(multiplication)
	float a,b,mult;

	// Отримання значень з полів LabeledEdit1 і LabeledEdit2 та конвертація їх в числа з плаваючою комою
	a=StrToFloat(LabeledEdit1->Text);
	b=StrToFloat(LabeledEdit2->Text);

	// // Обчислення добутку a і b
	mult=a*b;

	// Встановлення тексту панелі Panel1 для відображення результату обчислення
	Panel1->Caption= LabeledEdit1->Text + " * " + LabeledEdit2->Text + " = " +FloatToStr(mult);
}

// Обробник події кліку для кнопки Button4 (ділення)
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	// Оголошення змінних a, b і div
	float a,b,div;

	// Отримання значень з полів LabeledEdit1 і LabeledEdit2 та конвертація їх в числа з плаваючою комою
	a=StrToFloat(LabeledEdit1->Text);
	b=StrToFloat(LabeledEdit2->Text);

	// // Обчислення ділення a і b
	div=a/b;

	// Встановлення тексту панелі Panel1 для відображення результату обчислення
	Panel1->Caption= LabeledEdit1->Text + " / " + LabeledEdit2->Text + " = " +FloatToStr(div);
}
//---------------------------------------------------------------------------

