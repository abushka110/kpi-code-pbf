#include <stdio.h>

int main() {
    // Оголошення змінних для введення кількостей продуктів
    double m1, m2, m3;

    // Оголошення змінних для цін на продукти
    double price_m1 = 40.90;
    double price_m2 = 62.40;
    double price_m3 = 144.10;

    // Оголошення змінних для обчислення сум
    double total_m1, total_m2, total_m3, total;

    // Запит користувача ввести кількість продуктів
    printf("Введіть кількість масла (кг): ");
    scanf("%lf", &m1);
    printf("Введіть кількість майонезу (кг): ");
    scanf("%lf", &m2);
    printf("Введіть кількість вершків (кг): ");
    scanf("%lf", &m3);

    // Обчислення сум для кожного продукту
    total_m1 = m1 * price_m1;
    total_m2 = m2 * price_m2;
    total_m3 = m3 * price_m3;

    // Обчислення загальної суми
    total = total_m1 + total_m2 + total_m3;

    // Виведення результатів
    printf("Сума для масла: %.2lf грн\n", total_m1);
    printf("Сума для майонезу: %.2lf грн\n", total_m2);
    printf("Сума для вершків: %.2lf грн\n", total_m3);
    printf("Загальна сума: %.2lf грн\n", total);

    return 0;
}
