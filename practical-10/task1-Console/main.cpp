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

// Функція для генерації відпрацьованих днів та запису їх у файл
void generateData(Employee arr[], int size, ofstream& file) {
    // Ініціалізація генератора випадкових чисел
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 31);

    int totalDays = 0; // Загальна кількість відпрацьованих днів

    // Заповнення масиву даними про працівників
    for (int i = 0; i < size; i++) {
        // Генерація випадкового числа — кількість відпрацьованих днів
        arr[i].days = dis(gen);

        // Підрахунок загальної кількості відпрацьованих днів для всіх працівників
        totalDays += arr[i].days;

        // Розрахунок зарплати та податку для кожного працівника
        arr[i].salary = arr[i].days * salaryPerDay;
        arr[i].tax = arr[i].salary * taxRate;

        // Запис інформації про працівника у файл
        file << "Робітник: " << i+1 << ", Днів: " << arr[i].days << ", Зарплата: " << arr[i].salary << ", Податок: " << arr[i].tax << endl;
    }

    // Запис загальної кількості відпрацьованих днів у файл
    file << "Всього відпрацьовано днів: " << totalDays << endl << endl;
}

int main() {
    // Створення масивів для працівників у підрозділах A та B
    Employee employeesA[A], employeesB[B];

    // Відкриття файлу для запису
    ofstream file("data.txt");

    // Запис інформації про підрозділ A у файл
    file << "Підрозділ A:\n";
    generateData(employeesA, A, file);

    // Запис інформації про підрозділ B у файл
    file << "Підрозділ B:\n";
    generateData(employeesB, B, file);

    // Закриття файлу
    file.close();
    return 0;
}
