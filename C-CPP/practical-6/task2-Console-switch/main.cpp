#include <iostream>  // Підключення бібліотеки для введення/виведення на консоль.
#include <cmath>     // Підключення бібліотеки для математичних функцій.

double CalculateAlphaProfit(double x) {
    // Обчислення прибутку для підрозділу "Alpha" на основі функції зі складними математичними виразами.
    return 100 * fabs(cos(fabs(2 * x) / 2.15 - cos(3 * x - 3) + 10) + 100);
}

double CalculateBetaProfit(double x) {
    // Обчислення прибутку для підрозділу "Beta" на основі функції зі складними математичними виразами.
    return 120 * fabs(sin(x) * sin(x + 2) * cos(x * x) / 0.44 + 11.4 + 120);
}

double CalculateGammaProfit(double x) {
    // Обчислення прибутку для підрозділу "Gamma" на основі функції зі складними математичними виразами.
    return 130 * fabs(fabs(3 * sin(3 * x) + sin(2 * x - 1.8)) + 3.45) + 130;
}

int main() {
    double x = 5;  // Ініціалізація змінної x значенням 5.
    int i;  // Оголошення змінної i для вибору підрозділу.

    std::cout << "Введіть номер підрозділу (1 - alpha, 2 - beta або 3 - lamda): ";
    std::cin >> i;  // Зчитування номера підрозділу від користувача.

    double profit;  // Змінна для обчисленого прибутку.
    double depreciation;  // Змінна для обчислення амортизації.

    switch (i) {  // Розгалуження в залежності від вибору користувача.
        case 1:
            profit = CalculateAlphaProfit(x);
            depreciation = 0.2 * profit;
            break;
        case 2:
            profit = CalculateBetaProfit(x);
            depreciation = 0.3 * profit;
            break;
        case 3:
            profit = CalculateGammaProfit(x);
            depreciation = 0.4 * profit;
            break;
        default:
            std::cout << "Неправильний номер варіанту. Введіть 1, 2 або 3." << std::endl;
            return 1;  // Вихід з програми у разі некоректного вибору підрозділу.
    }

    std::cout << "Прибуток: " << profit << std::endl;  // Виведення обчисленого прибутку.
    std::cout << "Затрати на амортизацію: " << depreciation << std::endl;  // Виведення амортизації.
    std::cout << "Загальний прибуток: " << profit - depreciation << std::endl;  // Виведення загального прибутку.

    return 0;  // Завершення програми без помилок.
}
