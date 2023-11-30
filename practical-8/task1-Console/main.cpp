#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, e, a, f, sum = 0;
    int k = 1;

    cout << "Введіть x (0 <= x <= 1): ";
    cin >> x;
    cout << "Введіть точність e: ";
    cin >> e;

    ofstream fout;
    fout.open("file.txt", std::ios::app);

    f = 4.31 + pow(cos(x), 2) * sin(2*x - 2);

    a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
    while (fabs(a) >= e) {
        sum += a;
        k++;
        a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
    }

    fout << "Сума ряду: " << sum << "\n";
    fout << "Кількість доданків, що підсумовуються: " << k << "\n";

    cout << "Сума ряду: " << sum << "\n";
    cout << "Кількість доданків, що підсумовуються: " << k << "\n";

    fout.close();

    return 0;
}
