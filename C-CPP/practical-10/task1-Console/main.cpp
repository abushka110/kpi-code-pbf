// Підключення бібліотек
#include <iostream> // Бібліотека для вводу/виводу даних
#include <fstream> // Бібліотека для роботи з файлами
#include <random> // Бібліотека для генерації випадкових чисел

using namespace std; // Використання простору імен std

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

int main() {
    // Створення масивів для працівників у підрозділах A та B
    Employee employeesA[A], employeesB[B];

    // Відкриття файлу для запису
    ofstream file("data.txt");

    // Створення об'єкта для генерації випадкових чисел
    random_device rd;
    // Ініціалізація генератора випадкових чисел Mersenne Twister з випадковим початковим значенням
    mt19937 gen(rd());
    // Створення рівномірного розподілу випадкових чисел від 0 до 31
    uniform_int_distribution<> dis(0, 31);

    // Запис інформації про підрозділ A у файл
    file << "Підрозділ A:\n";
    int totalDaysA = 0; // Загальна кількість відпрацьованих днів
    for (int i = 0; i < A; i++) {
        // Генерація випадкового числа — кількість відпрацьованих днів
        employeesA[i].days = dis(gen);
        // Підрахунок загальної кількості відпрацьованих днів для всіх працівників
        totalDaysA += employeesA[i].days;
        // Розрахунок зарплати та податку для кожного працівника
        employeesA[i].salary = employeesA[i].days * salaryPerDay;
        employeesA[i].tax = employeesA[i].salary * taxRate;
        // Запис інформації про працівника у файл
        file << "Робітник: " << i+1 << ", Днів: " << employeesA[i].days << ", Зарплата: " << employeesA[i].salary << ", Податок: " << employeesA[i].tax << endl;
    }
    // Запис загальної кількості відпрацьованих днів у файл
    file << "Всього відпрацьовано днів: " << totalDaysA << endl << endl;

    // Запис інформації про підрозділ B у файл
    file << "Підрозділ B:\n";
    int totalDaysB = 0; // Загальна кількість відпрацьованих днів
    for (int i = 0; i < B; i++) {
        // Генерація випадкового числа — кількість відпрацьованих днів
        employeesB[i].days = dis(gen);
        // Підрахунок загальної кількості відпрацьованих днів для всіх працівників
        totalDaysB += employeesB[i].days;
        // Розрахунок зарплати та податку для кожного працівника
        employeesB[i].salary = employeesB[i].days * salaryPerDay;
        employeesB[i].tax = employeesB[i].salary * taxRate;
        // Запис інформації про працівника у файл
        file << "Робітник: " << i+1 << ", Днів: " << employeesB[i].days << ", Зарплата: " << employeesB[i].salary << ", Податок: " << employeesB[i].tax << endl;
    }
    // Запис загальної кількості відпрацьованих днів у файл
    file << "Всього відпрацьовано днів: " << totalDaysB << endl << endl;

    // Закриття файлу
    file.close();
    return 0;
}
