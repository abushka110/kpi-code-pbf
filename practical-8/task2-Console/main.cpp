#include <iostream>
#include <cmath>

using namespace std;

// Ряд Тейлора для функції ln((1+x)/(1-x))
double ln_taylor(double x, int n) {
    double sum = 2 * x;
    for (int i = 1; i <= n; i++) {
        sum += pow(x, 2 * i + 1) / (2 * i + 1);
    }
    return sum;
}

int main() {
    // Введення даних
    double x_start, x_end, dx, eps;
    cout << "x_поч: ";
    cin >> x_start;
    cout << "x_кін: ";
    cin >> x_end;
    cout << "dx: ";
    cin >> dx;
    cout << "точність: ";
    cin >> eps;

    // Розрахунок
    for (double x = x_start; x <= x_end; x += dx) {
        // Підрахунок кількості членів ряду
        int n = 0;
        double prev_sum = 0;
        double cur_sum = ln_taylor(x, n);
        while (fabs(cur_sum - prev_sum) > eps) {
            n++;
            prev_sum = cur_sum;
            cur_sum = ln_taylor(x, n);
        }

        // Виведення результату
        cout << "x = " << x << ", ln((1+x)/(1-x)) = " << cur_sum << ", n = " << n << endl;
    }

    return 0;
}
