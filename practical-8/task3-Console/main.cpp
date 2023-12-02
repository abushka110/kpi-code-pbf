#include <iostream>

using namespace std;

double f(double x) {
    return 4.31 + pow(cos(x), 2) * sin(2 * x - 2);
}

int main() {
    double x_start, x_end, dx;

    cout << "Введіть x початкове (0 <= x <= 1): ";
    cin >> x_start;
    cout << "Введіть x кінцеве (0 <= x <= 1): ";
    cin >> x_end;
    cout << "Введіть крок dx: ";
    cin >> dx;

    double x = x_start;
    int count = 0;
    double sum = 0;

    cout << "x - аргумент" << "y - значення функції" << endl;
    while (x <= x_end) {
        double y = f(x);
        if (y > 0) {
            count++;
            sum += y;
        }
        cout << "x = " << x << " y = " << y << endl;
        x += dx;
    }

    cout << "Сума додатних значень функції: " << sum << endl;
    cout << "Кількість додатних значень функції: " << count << endl;

    return 0;
}
