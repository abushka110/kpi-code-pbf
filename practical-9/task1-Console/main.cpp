#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const int startYear = 2011;
    const int endYear = 2022;
    const int numYears = endYear - startYear + 1;

    double production[numYears];

    for (int k = 0; k < numYears; ++k) {
        double year = startYear + k;
        production[k] = 100 * (2 * sin(year) * sin(4 * year - 1.4) * cos(2 * year + 1.5) - 7.1);
    }

    std::cout << "----------------------------------------------\n";
    std::cout << "|   Рік    |    Кількість продукції (тис.)   |\n";
    std::cout << "----------------------------------------------\n";

    int profitableYearCount = 0;
    int maxProductionYear = 0;
    double maxProduction = 0;
    double lossProductionSum = 0;

    for (int k = 0; k < numYears; ++k) {
        int year = startYear + k;
        double currentProduction = production[k];

        std::cout << "|   " << year << "   |            " << std::fixed << std::setprecision(3) << currentProduction << "             |\n";

        if (currentProduction > 0) {
            profitableYearCount++;
        } else {
            lossProductionSum += currentProduction;
        }

        if (std::abs(currentProduction) > std::abs(maxProduction)) {
            maxProduction = currentProduction;
            maxProductionYear = year;
        }

    }

    std::cout << "----------------------------------------------\n";

    std::cout << "Загальна кількість років з прибутком: " << profitableYearCount << "\n";
    std::cout << "Сума кількості приладів для збиткових років: " << std::abs(lossProductionSum) << "\n";
    std::cout << "Рік з найбільшою кількістю приладів: " << maxProductionYear << "\n";

    return 0;
}
