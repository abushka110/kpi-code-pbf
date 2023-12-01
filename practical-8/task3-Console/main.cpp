#include <iostream>

using namespace std;

double f(double x) {
    return 4.31 + pow(cos(x), 2) * sin(2 * x - 2);
}

int main() {
    double x_start = -10;
    double x_end = 10;
    double dx = 0.1;

    double x = x_start;
    int count = 0;
    double sum = 0;

    while (x <= x_end) {
        double y = f(x);
        if (y > 0) {
            count++;
            sum += y;
        }
        x += dx;
    }

    cout << "Сума додатних значень функції: " << sum << endl;
    cout << "Кількість додатних значень функції: " << count << endl;

    return 0;
}
