#include <iostream>

int main() {
    int integer1, integer2;
    char operation;  // Змінна для вибору операції
    double result;   // Змінна для збереження результату
    // Виведення текстового повідомлення для введення першого числа
    std::cout << "Enter the first number: ";
    std::cin >> integer1;
    // Виведення текстового повідомлення для вибору операції
    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;
    // Виведення текстового повідомлення для введення другого числа
    std::cout << "Enter the second number: ";
    std::cin >> integer2;
    // Виконання розрахунків залежно від вибраної операції
    switch (operation) {
        case '+':
            result = integer1 + integer2;
            break;
        case '-':
            result = integer1 - integer2;
            break;
        case '*':
            result = integer1 * integer2;
            break;
        case '/':
            if (integer2 != 0) {
                result = static_cast<double>(integer1) / integer2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1;  // Повертаємо 1, щоб позначити помилку
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1;  // Повертаємо 1, щоб позначити помилку
    }
    // Виведення результату розрахунків на консоль
    std::cout << "Result: " << result << std::endl;
    // Повернення значення 0 для позначення успішного завершення програми
    return 0;
}
