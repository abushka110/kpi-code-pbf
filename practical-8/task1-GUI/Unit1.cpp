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
    double fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	double a, f, sum = 0;
	int k = 1;
	double x = StrToFloat(Edit1->Text);
	double e = StrToFloat(Edit2->Text);
	ofstream fout;
	fout.open("file.txt", std::ios::app);
	f = 4.31 + pow(cos(x), 2) * sin(2*x - 2);
	a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
	while (fabs(a) >= e) {
		sum += a;
		k++;
		a = pow(-1, k) * ((f*(2*k+1)* pow(x, k))/ factorial(k));
	}
	fout << "Sum of a series: " << sum << "\n";
	fout << "Number of summed terms: " << k << "\n";
	Panel1->Caption = "Sum of a series: " + FloatToStr(sum);
	Panel1->Caption = "Number of summed terms: " + FloatToStr(k);
	fout.close();
}
//---------------------------------------------------------------------------

