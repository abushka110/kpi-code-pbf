#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Визначення початкового та кінцевого років
    const int startYear = 2011;
    const int endYear = 2022;
    const int numYears = endYear - startYear + 1;

    // Масив для зберігання виробництва протягом кожного року
    double production[numYears];

    // Обчислення виробництва для кожного року за заданою формулою
    for (int k = 0; k < numYears; ++k) {
        double year = startYear + k;
        production[k] = 100 * (2 * sin(year) * sin(4 * year - 1.4) * cos(2 * year + 1.5) - 7.1);
    }

    // Виведення заголовка таблиці
    std::cout << "----------------------------------------------\n";
    std::cout << "|   Рік    |    Кількість продукції (тис.)   |\n";
    std::cout << "----------------------------------------------\n";

    // Ініціалізація змінних для підрахунку статистики
    int profitableYearCount = 0;
    int maxProductionYear = 0;
    double maxProduction = 0;
    double lossProductionSum = 0;

    // Виведення даних про виробництво для кожного року
    for (int k = 0; k < numYears; ++k) {
        int year = startYear + k;
        double currentProduction = production[k];

        // Виведення даних у вигляді таблиці
        std::cout << "|     " << year << "     |            " << std::fixed << std::setprecision(0) << currentProduction << "             |\n";

        // Підрахунок кількості років з прибутком та суми збиткових років
        if (currentProduction > 0) {
            profitableYearCount++;
        } else {
            lossProductionSum += currentProduction;
        }

        // Знаходження року з найбільшим виробництвом
        if (std::abs(currentProduction) > std::abs(maxProduction)) {
            maxProduction = currentProduction;
            maxProductionYear = year;
        }
    }

    std::cout << "----------------------------------------------\n";

    // Виведення статистики
    std::cout << "Загальна кількість років з прибутком: " << profitableYearCount << "\n";
    std::cout << "Сума кількості приладів для збиткових років: " << lossProductionSum << "\n";
    std::cout << "Рік з найбільшою кількістю приладів: " << maxProductionYear << "\n";

    return 0;
}
