#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Функція для обчислення факторіалу заданого цілого числа
double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Функція для обчислення кожного члена ряду
double calculateTerm(int k, double x) {
    // Формула для члена ряду
    double f = 4.31 + pow(cos(x), 2) * sin(2 * x - 2);
    double factorialK = factorial(k);
    return pow(-1, k) * (f * (2 * k + 1) * pow(x, k) / factorialK);
}

int main() {
    // Файловий потік для запису результатів у файл
    ofstream fout;
    fout.open("result.txt", ios::app);

    double x, precision;
    int terms = 0;
    double sum = 0.0;

    // Введення користувачем значення x
    cout << "Введіть значення для x (від 0 до 1): ";
    cin >> x;

    // Введення користувачем бажаної точності
    cout << "Введіть бажану точність (наприклад, 0.001): ";
    cin >> precision;

    double term = 0;
    // Цикл для обчислення суми ряду до досягнення бажаної точності
    while (fabs(term) >= precision || terms == 0) {
        terms++;
        term = calculateTerm(terms, x);
        sum += term;
    }

    // Виведення суми ряду та кількості доданків
    cout << "Сума ряду з точністю " << precision << ": " << sum << endl;
    cout << "Кількість доданків: " << terms << endl;

    // Запис результатів у файл
    fout << "Для x = " << x << " та точності = " << precision << endl;
    fout << "Сума ряду: " << sum << endl;
    fout << "Кількість доданків: " << terms << endl;
    fout << "----------------------------------------\n";

    // Закриття файлового потоку
    fout.close();

    return 0;
}
