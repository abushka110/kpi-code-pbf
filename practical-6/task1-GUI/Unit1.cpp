//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	// Встановлюємо початкової властивість Enabled для CheckBox4 залежно від стану CheckBox3 та CheckBox5
	CheckBox4->Enabled = CheckBox3->Checked || CheckBox5->Checked;
}

void __fastcall TForm1::CheckBox5Click(TObject *Sender)
{
	// Змінюємо властивість Enabled для CheckBox4 при кліку на CheckBox5
	CheckBox4->Enabled = CheckBox5->Checked;
}

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
	// Змінюємо властивість Enabled для CheckBox4 при кліку на CheckBox3
	CheckBox4->Enabled = CheckBox3->Checked;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	// Оголошення змінної для обчислення загальної суми покупки
	double totalSum = 0.0;

    // Додавання вартості напою до загальної суми, якщо вибрано CheckBox1
    switch (CheckBox1->Checked)
    {
		case true: totalSum += 34.0; // Вартість напою
            break;
		default: break;
    }

    // Додавання вартості морозива до загальної суми, якщо вибрано CheckBox2
    switch (CheckBox2->Checked)
    {
		case true: totalSum += 63.0; // Вартість морозива
            break;
		default: break;
    }

	// Додавання вартості картоплі до загальної суми, якщо вибрано CheckBox3
	switch (CheckBox3->Checked)
	{
		case true: totalSum += 51.0; // Вартість картоплі
			break;
		default: break;
	}

	// Додавання вартості кетчупу до загальної суми, якщо вибрано CheckBox4
	switch (CheckBox4->Checked)
	{
		case true: totalSum += 16.0; // Вартість кетчупу
			break;
		default: break;
	}

	// Додавання вартості пиріжка до загальної суми, якщо вибрано CheckBox5
	switch (CheckBox5->Checked)
	{
		case true:
			totalSum += 70.0; // Вартість пиріжка
			break;
		default: break;
	}

	// Застосовуємо знижку 5% до загальної суми, якщо всі CheckBox'и вибрані
	if (CheckBox1->Checked && CheckBox2->Checked && CheckBox3->Checked && CheckBox4->Checked && CheckBox5->Checked)
	{
		totalSum *= 0.95;
	}

	// Відображення обчисленої загальної суми на Label2
	Label2->Caption = FloatToStrF(totalSum, ffFixed, 8, 2);

	// Виведення повідомлення з обчисленою сумою
	ShowMessage("Total: " + FloatToStrF(totalSum, ffFixed, 8, 2) + "(UAH)");
}

//---------------------------------------------------------------------------

