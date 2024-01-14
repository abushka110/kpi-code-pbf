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
// Підключення бібліотек
#include <iostream> // Бібліотека для вводу/виводу даних
#include <random> // Бібліотека для генерації випадкових чисел
//---------------------------------------------------------------------------
using namespace std; // Використання простору імен std
//---------------------------------------------------------------------------
// Константи для кількості працівників у підрозділах A та B
const int A = 15; // Кількість працівників у підрозділі A
const int B = 20; // Кількість працівників у підрозділі B
// Константи для розрахунку зарплати та податку
const int salaryPerDay = 40; // Зарплата за день
const double taxRate = 0.2; // Податкова ставка
// Структура для зберігання інформації про працівника
struct Employee {
    int days; // Кількість відпрацьованих днів
    int salary; // Зарплата
    double tax; // Податок
};

void __fastcall TForm1::BtnCalculateClick(TObject *Sender)
{
	Memo1->Clear();
	StringGrid1->Cells[0][0]="Employees";
	StringGrid1->Cells[1][0]="Days";
	StringGrid1->Cells[2][0]="Salary";
	StringGrid1->Cells[3][0]="Tax";

    // Створення масивів для працівників у підрозділах A та B
	Employee employeesA[A], employeesB[B];

    // Створення об'єкта для генерації випадкових чисел
    random_device rd;
    // Ініціалізація генератора випадкових чисел Mersenne Twister з випадковим початковим значенням
    mt19937 gen(rd());
    // Створення рівномірного розподілу випадкових чисел від 0 до 31
	uniform_int_distribution<> dis(0, 31);

	int totalDaysA = 0; // Загальна кількість відпрацьованих днів
	for (int i = 0; i < A; i++) {
		// Генерація випадкового числа — кількість відпрацьованих днів
		employeesA[i].days = dis(gen);
		// Підрахунок загальної кількості відпрацьованих днів для всіх працівників
		totalDaysA += employeesA[i].days;
		// Розрахунок зарплати та податку для кожного працівника
		employeesA[i].salary = employeesA[i].days * salaryPerDay;
		employeesA[i].tax = employeesA[i].salary * taxRate;
		// Вивід інформації
		StringGrid1->Cells[0][i+1]=i+1;
		StringGrid1->Cells[1][i+1]=employeesA[i].days;
		StringGrid1->Cells[2][i+1]=employeesA[i].salary;
		StringGrid1->Cells[3][i+1]=employeesA[i].tax;
	}
    // Виведення загальної кількості відпрацьованих днів
	Memo1->Lines->Add("Division A Total days worked : " + FloatToStr(totalDaysA));
    StringGrid2->Cells[0][0]="Employees";
	StringGrid2->Cells[1][0]="Days";
	StringGrid2->Cells[2][0]="Salary";
	StringGrid2->Cells[3][0]="Tax";
    int totalDaysB = 0; // Загальна кількість відпрацьованих днів
	for (int i = 0; i < B; i++) {
        // Генерація випадкового числа — кількість відпрацьованих днів
        employeesB[i].days = dis(gen);
        // Підрахунок загальної кількості відпрацьованих днів для всіх працівників
        totalDaysB += employeesB[i].days;
        // Розрахунок зарплати та податку для кожного працівника
        employeesB[i].salary = employeesB[i].days * salaryPerDay;
		employeesB[i].tax = employeesB[i].salary * taxRate;
		// Вивід інформації
		StringGrid2->Cells[0][i+1]=i+1;
		StringGrid2->Cells[1][i+1]=employeesB[i].days;
		StringGrid2->Cells[2][i+1]=employeesB[i].salary;
		StringGrid2->Cells[3][i+1]=employeesB[i].tax;
	}
	// Виведення загальної кількості відпрацьованих днів
	Memo1->Lines->Add("Division B Total days worked: " + FloatToStr(totalDaysB));
}
//---------------------------------------------------------------------------



