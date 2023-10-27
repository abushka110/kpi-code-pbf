#include <iostream>
#include <cmath>

// Функція для обчислення прибутку для підрозділу alpha
double CalculateAlphaProfit(double x) {
    return 100 * fabs(cos(fabs(2 * x) / 2.15 - cos(3 * x - 3) + 10) + 100);
}

// Функція для обчислення прибутку для підрозділу beta
double CalculateBetaProfit(double x) {
    return 120 * fabs(sin(x) * sin(x + 2) * cos(x * x) / 0.44 + 11.4 + 120);
}

// Функція для обчислення прибутку для підрозділу gamma
double CalculateGammaProfit(double x) {
    return 130 * fabs(fabs(3 * sin(3 * x) + sin(2 * x - 1.8)) + 3.45) + 130;
}

int main() {
    double x; // Змінна x, яка використовується для обчислення прибутку
    int i;    // Номер варіанту

    std::cout << "Введіть номер підрозділу (1 - alpha, 2 - betta або 3 - lamda): ";
    std::cin >> i;

    double profit = 0;
    double depreciation = 0;

    // Обчислюємо прибуток та затрати на амортизацію в залежності від вибраного підрозділу
    if (i == 1) {
        profit = CalculateAlphaProfit(x);
        depreciation = 0.2 * profit;
    } else if (i == 2) {
        profit = CalculateBetaProfit(x);
        depreciation = 0.3 * profit;
    } else if (i == 3) {
        profit = CalculateGammaProfit(x);
        depreciation = 0.4 * profit;
    } else {
        std::cout << "Неправильний номер варіанту. Введіть 1, 2 або 3." << std::endl;
        return 1; // Повертаємо помилку
    }

    std::cout << "Прибуток: " << profit << std::endl;
    std::cout << "Затрати на амортизацію: " << depreciation << std::endl;
    std::cout << "Загальний прибуток: " << profit - depreciation << std::endl;

    return 0;
}
