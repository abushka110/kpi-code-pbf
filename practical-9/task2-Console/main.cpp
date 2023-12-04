#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    const int size = 10;
    double y[size];

    // Заповнення масиву y за заданим виразом
    for (int k = 1; k <= size; ++k) {
        y[k - 1] = fabs(pow(cos(k), 2) - 1.25) * sin(3 * k - 4.44) + 4.44;
    }

    // Виведення масиву y
    cout << "Масив y:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "y[" << i + 1 << "] = " << y[i] << endl;
    }

    // Пошук максимального елемента
    double maxElement = y[0];
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (y[i] > maxElement) {
            maxElement = y[i];
            maxIndex = i;
        }
    }

    // Занесення додатних елементів (крім максимального) в інший масив
    vector<double> positiveElements;
    for (double i : y) {
        if (i > 0 && i < maxElement) {
            positiveElements.push_back(i);
        }
    }

    // Виведення максимального елемента
    cout << "Максимальний елемент: y[" << maxIndex + 1 << "] = " << maxElement << endl;

    // Виведення 1-го додатного елемента головного масиву
    for (int i = 0; i < size; ++i) {
        if (y[i] > 0) {
            cout << "1-ий додатній елемент: y[" << i + 1 << "] = " << y[i] << endl;
            break;
        }
    }

    // Виведення другого масиву
    if (positiveElements.empty()) {
        cout << "Додатні елементи (крім максимального) відсутні" << endl;
    } else {
        cout << "Додатні елементи (крім максимального):" << endl;
        for (int i = 0; i < size; ++i) {
            if (y[i] > 0 && y[i] < maxElement) {
                cout << "y[" << i + 1 << "] = " << y[i] << endl;
            }
        }
    }

    return 0;
}
