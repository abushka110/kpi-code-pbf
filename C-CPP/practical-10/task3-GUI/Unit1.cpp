//---------------------------------------------------------------------------

#include <vcl.h>
#include <cstdlib>  // для функції rand()
#include <ctime>    // для функції time()
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnVoteClick(TObject *Sender)
{
	Memo1->Lines->Clear();

	StringGrid1->Cells[0][0]="Candidate";

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
    // Вивід голосів за кожне місто
	for (int i = 0; i < towns; i++) {
		StringGrid1->Cells[0][i+1] = "City"+FloatToStr(i+1); // Вивід номера міста
		for (int j = 0; j < candidates; j++) {
		StringGrid1->Cells[j+1][0]=FloatToStr(j+1);
		StringGrid1->Cells[j+1][i+1]= FloatToStr(votes[i][j]); // Вивід кількості голосів за кожного кандидата в місті
		}
    }
    // Вивід переможців для міст, де переміг 1-й або 2-й кандидат
    for (int i = 0; i < towns; i++) {
		if (winners[i] == 1 || winners[i] == 2) {
			Memo1->Lines->Add("In the city under number " + FloatToStr(i + 1) + ", candidate number " + FloatToStr(winners[i]) + " won");
        }
	}
}
//---------------------------------------------------------------------------
