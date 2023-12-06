// Підключення необхідних бібліотек
#include <iostream> // для операцій вводу/виводу
#include <cstdlib>  // для функції rand()
#include <ctime>    // для функції time()

using namespace std;

int main() {
    // Ініціалізація генератора випадкових чисел поточним часом
    // Якщо time(0) замінити на фіксоване число, генеровані значення будуть однаковими
    srand(time(0));

    // Визначення кількості міст і кандидатів
    const int towns = 6;
    const int candidates = 5;

    int votes[towns][candidates] = {0}; // Ініціалізація двовимірного масиву для зберігання кількості голосів за кожного кандидата в кожному місті
    int winners[towns] = {0}; // Ініціалізація масиву для зберігання переможців у кожному місті

    // Цикл для присвоєння випадкових значень голосів
    for (auto& vote : votes) {
        for (int& j : vote) {
            j = rand() % (10 * 5 + 100); // Генерація випадкового числа від 100 до 550 (включно)
        }
    }

    // Цикл для визначення переможців у кожному місті
    for (int i = 0; i < towns; i++) {
        int max_votes = 0; // Змінна для зберігання максимальної кількості голосів
        int winning_candidate = 0; // Змінна для зберігання переможця

        for (int j = 0; j < candidates; j++) {
            if (votes[i][j] > max_votes) {
                max_votes = votes[i][j]; // Оновлення максимальної кількості голосів
                winning_candidate = j + 1; // Оновлення переможця
            }
        }
        winners[i] = winning_candidate; // Збереження переможця в масиві "winners"
    }

    // Вивід заголовка таблиці
    cout << "        Кандидат 1\tКандидат 2\tКандидат 3\tКандидат 4\tКандидат 5\n";

    // Вивід голосів за кожне місто
    for (int i = 0; i < towns; i++) {
        cout << "Місто " << i + 1; // Вивід номера міста
        for (int j = 0; j < candidates; j++) {
            cout << "\t" << votes[i][j]; // Вивід кількості голосів за кожного кандидата в місті
        }
        cout << "\n";
    }

    // Вивід переможців для міст, де переміг 1-й або 2-й кандидат
    for (int i = 0; i < towns; i++) {
        if (winners[i] == 1 || winners[i] == 2) {
            cout << "В місті під номером №" << i + 1 << ", переміг кандидат під номером №" << winners[i] << ".\n";
        }
    }

    return 0;
}
