﻿#include <vcl.h> // Включення бібліотеки VCL (Visual Component Library), необхідної для роботи з візуальними компонентами.

#pragma hdrstop // Зупинка обробника заголовків, що вказує на завершення обробки заголовочних файлів.

#include "Unit1.h" // Підключення власного заголовочного файлу "Unit1.h".

//---------------------------------------------------------------------------
#pragma package(smart_init) // Інструкція для автоматичної ініціалізації пакету, яка дозволяє автоматично завантажувати необхідні пакети.

#pragma resource "*.dfm" // Оголошення ресурсу форми (форма зберігається в окремому файлі з розширенням .dfm).

TForm1 *Form1; // Оголошення глобальної змінної, яка представляє об'єкт класу форми.

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) // Оголошення конструктора класу форми з параметром Owner, що представляє власника.

	: TForm(Owner) // Виклик конструктора базового класу TForm з переданим власником.

{
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) // Обробник події натискання кнопки "Button1".
{
	int month; // Оголошення змінної для збереження номера місяця.

	month = StrToInt(Edit1->Text); // Отримання та перетворення текстового вводу з поля "Edit1" у ціле число та збереження в змінну "month".

	if (month == 1 || month == 2 || month == 12) // Перевірка, чи номер місяця відповідає зимовим місяцям.
	{
		Label1->Caption = "Winter. Cold!"; // Встановлення тексту на "Label1" для виведення інформації про зиму.
	}
	else if (month >= 3 && month <= 5) // Перевірка, чи номер місяця відповідає весняним місяцям.
	{
		Label1->Caption = "Spring. Nature comes alive!"; // Встановлення тексту на "Label1" для виведення інформації про весну.
	}
	else if (month >= 6 && month <= 8) // Перевірка, чи номер місяця відповідає літнім місяцям.
	{
		Label1->Caption ="Summer. Heat and sun!"; // Встановлення тексту на "Label1" для виведення інформації про літо.
	}
	else if (month >= 9 && month <= 11) // Перевірка, чи номер місяця відповідає осіннім місяцям.
	{
		Label1->Caption = "Autumn. The time of precipitation and autumn colors!"; // Встановлення тексту на "Label1" для виведення інформації про осінь.
	}
	else // В разі, якщо номер місяця не відповідає жодному з визначених варіантів.
	{
		ShowMessage("Incorrect month number entered. Enter a number from 1 to 12."); // Виведення повідомлення про некоректний ввід номера місяця.
	}
}
//---------------------------------------------------------------------------
