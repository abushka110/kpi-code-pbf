//---------------------------------------------------------------------------

#include <vcl.h>
#include <cmath>
#include <fstream>
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
double factorial(int n) {
    double x, e, a, f, sum = 0;
    int k = 1;

    cout << "Введіть x (0 <= x <= 1): ";
    cin >> x;
    cout << "Введіть точність e: ";
    cin >> e;

    ofstream fout;
    fout.open("file.txt", std::ios::app);

    f = 4.31 + pow(cos(x), 2) * sin(2*x - 2);

    a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
    while (fabs(a) >= e) {
        sum += a;
        k++;
        a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
    }

    fout << "Сума ряду: " << sum << "\n";
    fout << "Кількість доданків, що підсумовуються: " << k << "\n";

    cout << "Сума ряду: " << sum << "\n";
    cout << "Кількість доданків, що підсумовуються: " << k << "\n";

    fout.close();

    return 0;
}
//---------------------------------------------------------------------------
