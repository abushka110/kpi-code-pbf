#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// Функція для обчислення факторіалу числа n
double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    // Оголошення змінних
    double x, e, a, f, sum = 0;
    int k = 1;

    // Введення значення x
    cout << "Введіть x (0 <= x <= 1): ";
    cin >> x;

    // Введення точності e
    cout << "Введіть точність e: ";
    cin >> e;

    // Відкриття файлу для запису результатів
    ofstream fout;
    fout.open("file.txt", std::ios::app);

    // Обчислення значення f
    f = 4.31 + pow(cos(x), 2) * sin(2*x - 2);

    // Обчислення та сумування доданків у ряду
    a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
    while (fabs(a) >= e) {
        sum += a;
        k++;
        a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
    }

    // Запис результатів у файл
    fout << "Сума ряду: " << sum << "\n";
    fout << "Кількість доданків, що підсумовуються: " << k << "\n";

    // Виведення результатів на консоль
    cout << "Сума ряду: " << sum << "\n";
    cout << "Кількість доданків, що підсумовуються: " << k << "\n";

    // Закриття файлу
    fout.close();

    return 0;
}
