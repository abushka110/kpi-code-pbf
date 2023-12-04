#include <iostream>
#include <cmath>

const int N = 10;

int main() {
    // Задання масиву x
    double x[N] = { /* вкажіть значення елементів масиву x */ };

    // Задання масиву y та обчислення його значень
    double y[N];
    for (int k = 0; k < N; ++k) {
        y[k] = std::abs(std::cos(x[k] * x[k]) - 1.25) * std::sin(3 * x[k] - 4.44) + 4.44;
    }

    // Знаходження максимального елемента масиву y
    double maxElement = y[0];
    for (int k = 1; k < N; ++k) {
        if (y[k] > maxElement) {
            maxElement = y[k];
        }
    }

    // Занесення додатніх елементів (крім максимального) в інший масив
    double positiveElements[N];
    int posIndex = 0;
    for (int k = 0; k < N; ++k) {
        if (y[k] > 0 && y[k] != maxElement) {
            positiveElements[posIndex] = y[k];
            ++posIndex;
        }
    }

    // Виведення результатів
    std::cout << "Масив y:\n";
    for (int k = 0; k < N; ++k) {
        std::cout << "y[" << k << "] = " << y[k] << "\n";
    }

    if (posIndex > 0) {
        std::cout << "Додатні елементи масиву y (крім максимального):\n";
        for (int i = 0; i < posIndex; ++i) {
            std::cout << positiveElements[i] << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Додатні елементи (крім максимального) відсутні.\n";
    }

    return 0;
}
