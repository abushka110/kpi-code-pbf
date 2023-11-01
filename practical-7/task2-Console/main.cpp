#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i = 5;
    double a = 0;
    double b = 1;

    for (int k = 1; k <= i+8; k++) {
        double ak = cos(pow(k, 3) + 1) - fabs(sin(2 * k)- 5.5);
        a += ak;
    }

    for (int k = 1; k <= i+4; k++) {
        double bk = sin(k) - cos(pow(k, 3)) * sin(pow(k, 2) - 4.24) + 4.24;
        b *= bk;
    }

    double z = pow(0.1 * b, 2);

    cout << i << endl;
    cout << a << endl;
    cout << b << endl;
    cout << z << endl;

    return 0;
}
