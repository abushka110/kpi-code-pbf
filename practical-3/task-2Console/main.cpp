#include <iostream>
#include <cmath> // Підключення бібліотеки для математичних операцій і функцій

int main()
{
    double alpha; // Змінна для введення кута alpha
    double z1, z2; // Результати обчислень за обома формулами
    // Введення значення кута alpha в радіанах
    std::cout << "Введіть значення кута alpha в радіанах: ";
    std::cin >> alpha;
    // Розрахунок за першою формулою (z1)
    z1 = cos(alpha) + cos(2 * alpha) + cos(6 * alpha) + cos(7 * alpha);
    // Розрахунок за другою формулою (z2)
    z2 = 4 * cos(alpha / 2) * cos(5 * alpha / 2) * cos(4 * alpha);
    // Виведення результатів обчислень
    std::cout << "Результат за першою формулою (z1): " << z1 << std::endl;
    std::cout << "Результат за другою формулою (z2): " << z2 << std::endl;
    // Перевірка на співпадіння результатів
    if (fabs(z1 - z2) < 1e-6) // Використовуємо допустиму похибку
    {
        std::cout << "Результати співпадають." << std::endl;
    }
    else
    {
        std::cout << "Результати не співпадають." << std::endl;
    }
    return 0;
}