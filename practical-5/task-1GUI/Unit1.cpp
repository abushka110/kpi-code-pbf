#include <vcl.h> // Підключення головного заголовочного файлу бібліотеки VCL (Visual Component Library), необхідної для роботи з компонентами візуального інтерфейсу.

#pragma hdrstop // Зупинка обробника заголовків, використовується в рамках середовища розробки C++Builder.

#include "Unit1.h" // Підключення власного заголовочного файлу "Unit1.h", який містить оголошення класу форми та компонентів.

//---------------------------------------------------------------------------
#pragma package(smart_init) // Інструкція для автоматичної ініціалізації пакету, дозволяє автоматично завантажувати пакети, необхідні для проекту.

#pragma resource "*.dfm" // Оголошення ресурсу форми, де *.dfm - файл, що містить інформацію про графічний інтерфейс форми.

TForm1 *Form1; // Оголошення глобальної змінної, яка представляє об'єкт класу форми.

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)

{
}

// Обробник події натискання кнопки "Button1"
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    double R1 = StrToFloat(Edit1->Text); // Отримання значення опору R1 з текстового поля "Edit1" та перетворення його в число з рухомою комою.

    double R2 = StrToFloat(Edit1->Text); // Отримання значення опору R2 з текстового поля "Edit1" та перетворення його в число з рухомою комою.

    if (RadioGroup1->ItemIndex == 0) { // Перевірка, яка радіокнопка вибрана в групі "RadioGroup1" (серійне з'єднання).
        double equivalentResistance = R1 + R2; // Розрахунок еквівалентного опору для серійного з'єднання.
        Label4->Caption = "Equivalent Resistance (Series): " + FloatToStr(equivalentResistance) + " ohms"; // Встановлення тексту на "Label4" для відображення результату.
    }
    else if (RadioGroup1->ItemIndex == 1) { // Перевірка, яка радіокнопка вибрана в групі "RadioGroup1" (паралельне з'єднання).
        double equivalentResistance = 1.0 / (1.0 / R1 + 1.0 / R2); // Розрахунок еквівалентного опору для паралельного з'єднання.
        Label4->Caption = "Equivalent Resistance (Parallel): " + FloatToStr(equivalentResistance) + " ohms"; // Встановлення тексту на "Label4" для відображення результату.
    }
    else {
        ShowMessage("Please select a connection type (Series or Parallel)."); // Виведення повідомлення, якщо не вибрано жодної радіокнопки.
    }
}

// Обробник події натискання кнопки "Button2"
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Close(); // Закриття програми.
}

