#include <iostream>
#include <cmath>     // Включення бібліотеки для математичних функцій

using namespace std; // Використання простору імен std

int main() {
    // ініціалізація змінних
    double i = 5;
    double a = 0;
    double b = 1;

    // Розрахунок за формулою суми
    for (int k = 1; k <= i+8; k++) {
        // Розрахунок за формулою №9
        double ak = cos(pow(k, 3) + 1) - fabs(sin(2 * k) - 5.5);
        a += ak;  // Додавання 'ak' до поточного значення 'a'.
    }

    // Розрахунок за формулою добутку
    for (int k = 1; k <= i+4; k++) {
        // Розрахунок за формулою №10
        double bk = sin(k) - cos(pow(k, 3)) * sin(pow(k, 2) - 4.24) + 4.24;
        b *= bk;  // Множення 'bk' на поточне значення 'b'.
    }

    double z = pow(0.1 * b, 2);  // Обчислення змінної 'z'.

    // Виведення результатів на екран.
    cout << "i = " << i << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "z = " << z << endl;

    return 0;
}
