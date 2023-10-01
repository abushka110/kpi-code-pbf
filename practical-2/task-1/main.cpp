#include <iostream>

int main() {
    int A, B, C;
    // Запит користувача на введення значення A
    std::cout << "Enter the value of A: ";
    std::cin >> A;
    // Запит користувача на введення значення B
    std::cout << "Enter the value of B: ";
    std::cin >> B;
    // Запит користувача на введення значення C
    std::cout << "Enter the value of C: ";
    std::cin >> C;
    // Обчислення виразу (A - B) * C
    int result = (A - B) * C;
    // Виведення результату в консоль
    std::cout << "Result of the expression (" << A << " - " << B << ") * " << C << " is: " << result << std::endl;
    return 0;
}
