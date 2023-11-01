#include <iostream>

using namespace std;

int main() {
    double startValue = 1.0;
    double stepSize = 1.0;
    int rowCount = 10;

    cout << "Введіть початкове значення стандарти: ";
    cin >> startValue;

    cout << "Введіть крок зміни: " ;
    cin >> stepSize;

    cout << "Введіть кількість рядків таблиці: ";
    cin >> rowCount;

    cout << "|  Стандарти  |      Роди      |  Куб. м  |" << endl;
    cout << "------------------------------------------------" << endl;

    for (int i = 0; i < rowCount; i++) {
        double standard = startValue + i * stepSize;
        double roda = standard / 0.165;
        double cubicMeter = standard / 4.672;

        cout << standard << "                  " << roda << "       " << cubicMeter << endl;
    }

    return 0;
}
