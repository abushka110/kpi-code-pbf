#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double factorial(int k) {
    if (k == 0 || k == 1) {
        return 1;
    } else {
        return k * factorial(k - 1);
    }
}

double calculateTerm(int k, double x) {
    double f = 4.31 + pow(cos(x), 2) * sin(2 * x - 2);
    double factorialK = factorial(k);
    return pow(-1, k) * (f * (2 * k + 1) * pow(x, k) / factorialK);
}

int main() {
    ofstream fout;
    fout.open("output.txt", ios::app);

    double x, precision;
    int terms = 0;
    double sum = 0.0;

    // Get user input for x and precision
    cout << "Enter a value for x (between 0 and 1): ";
    cin >> x;

    cout << "Enter the desired precision (e.g., 0.001): ";
    cin >> precision;

    // Calculate the sum of the series
    double term = 0;
    while (fabs(term) >= precision || terms == 0) {
        terms++;
        term = calculateTerm(terms, x);
        sum += term;
    }

    // Output the result
    cout << "Sum of the series with precision " << precision << ": " << sum << endl;
    cout << "Number of terms summed: " << terms << endl;

    // Write results to the file
    fout << "For x = " << x << " and precision = " << precision << endl;
    fout << "Sum of the series: " << sum << endl;
    fout << "Number of terms summed: " << terms << endl;
    fout << "----------------------------------------\n";

    fout.close();

    return 0;
}
