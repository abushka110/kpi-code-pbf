#include <iostream>  // Включення бібліотеки для виводу та введення даних
#include <vector>    // Включення бібліотеки для роботи з векторами
#include <string>    // Включення бібліотеки для роботи з рядками
#include <sstream>   // Включення бібліотеки для роботи з рядковими потоками

using namespace std;  // Використання простору імен "std"

int main() {
    // Оголошення меню з парами "назва продукту" та "ціна"
    vector<pair<string, int>> menu = {
            {"напій", 34},
            {"морозиво", 63},
            {"картопля фрі", 63},
            {"соус", 51},
            {"бургер", 70}
    };

    vector<int> order;  // Вектор для зберігання замовлення
    int total = 0;  // Загальна вартість замовлення

    while (true) {  // Безкінечний цикл для обробки замовлень
        cout << "Зробіть замовлення:" << endl;

        for (int i = 0; i < menu.size(); i++) {
            // Виведення позицій меню та їх ціни, окрім соусу
            if (!((order.empty() || (find(order.begin(), order.end(), 3) == order.end())) && (i == 3))) {
                cout << i + 1 << ". " << menu[i].first << "(" << menu[i].second << "грн), ";
            }
        }

        cout << endl;

        string input;
        getline(cin, input);  // Отримання введення від користувача
        stringstream ss(input);  // Створення рядкового потоку для розбору введення
        int item;

        while (ss >> item) {  // Парсинг введення користувача
            if (item >= 1 && item <= menu.size()) {
                order.push_back(item);  // Додавання вибраних позицій до замовлення
                total += menu[item - 1].second;  // Обчислення загальної вартості замовлення
                if (item == 3 || item == 5) {
                    int sauceChoice;
                    cout << "Чи потрібен соус (Так - 1; Ні - 2): ";
                    cin >> sauceChoice;  // Вибір користувача щодо соусу
                    if (sauceChoice == 1) {
                        order.push_back(4);  // Додавання соусу до замовлення
                        total += menu[3].second;  // Оновлення загальної вартості замовлення
                    }
                }
            }
        }

        cout << "Ви обрали: ";
        for (int i = 0; i < order.size(); i++) {
            cout << menu[order[i] - 1].first;  // Виведення обраних позицій з меню
            if (i < order.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;

        // перевірка, чи користувач замовив усе меню
        if (order.size() == menu.size()) {
            total = total - (total * 5 / 100);  // Знижка 5% за весь заказ
            cout << "До сплати (з урахуванням знижки): " << total << "грн." << endl;
        } else {
            cout << "До сплати: " << total << "грн." << endl;
            break;  // Завершення програми, замовлення закінчено
        }

        order.clear();  // Очищення замовлення
        total = 0;  // Скидання загальної вартості
    }
    return 0;  // Завершення програми
}
