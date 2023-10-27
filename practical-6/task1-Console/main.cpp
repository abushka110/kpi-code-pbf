#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void totalSum(const vector<pair<string, int>>& menu, const vector<int>& order, int total) {
    if (order.size() == menu.size()) {
        total = total - (total * 5 / 100); // Знижка 5%
        cout << "До сплати (з урахуванням знижки): " << total << "грн." << endl;
    } else {
        cout << "До сплати: " << total << "грн." << endl;
    }
}

int getUserPayChoice() {
    int choice;
    cout << "Оплатити замовлення? (Так - 1; Ні - 2): ";
    cin >> choice;
    return choice;
}

int main() {
    vector<pair<string, int>> menu = {
            {"напій", 34},
            {"морозиво", 63},
            {"картопля фрі", 63},
            {"соус", 51},
            {"бургер", 70}
    };

    vector<int> order;
    int total = 0;
    bool burgerOrFriesSelected = false;

    while (true) {
        cout << "Зробіть замовлення:" << endl;
        for (int i = 0; i < menu.size(); i++) {
            // Виводимо всі товари окрім соусу, якщо в корзині немає картоплі фрі або бургера
            if (!((order.empty() || (find(order.begin(), order.end(), 3) == order.end())) && (i == 3))) {
                cout << i + 1 << ". " << menu[i].first << "(" << menu[i].second << "грн), ";
            }
        }

        cout << endl;

        string input;
        getline(cin, input);
        stringstream ss(input);
        int item;

        while (ss >> item) {
            if (item >= 1 && item <= menu.size()) {
                order.push_back(item);
                total += menu[item - 1].second;
                if (item == 3 || item == 5) { // Перевіряємо, чи вибрали бургер або картоплю фрі
                    int sauceChoice;
                    cout << "Чи потрібен соус (Так - 1; Ні - 2): ";
                    cin >> sauceChoice;
                    if (sauceChoice == 1) {
                        order.push_back(4); // Додаємо соус до замовлення
                        total += menu[3].second;
                    }
                }
            }
        }

        cout << "Ви обрали: ";
        for (int i = 0; i < order.size(); i++) {
            cout << menu[order[i] - 1].first;
            if (i < order.size() - 1) {
                cout << ", ";
            }
        }
        cout << "\nЗ вас: " << total << "грн." << endl;
        int choice = getUserPayChoice();

        if (choice == 1) {
            if (total > 0) {
                totalSum(menu, order, total);
            }
            break;
        } else if (choice == 2) {
            cout << "Прикро, що ви відмінили замовлення. До побачення!" << endl;
            break;
        }

        order.clear();
        total = 0;
    }

    return 0;
}
