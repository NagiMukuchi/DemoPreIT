// SonDNX S5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "Nhap so N: ";
    cin >> N;

    // Su dung cong thuc gan dung (Euler–Mascheroni constant approximation)
    double gamma = 0.5772156649; // Euler–Mascheroni constant
    double sumHarmonicFormula = log(N) + gamma + 1.0 / (2 * N);
    cout << "Tong S5 su dung cong thuc gan dung = " << setprecision(10) << sumHarmonicFormula << endl;

    // Su dung vong lap for
    double sumHarmonicLoop = 0.0;
    for (int i = 1; i <= N; i++) {
        sumHarmonicLoop += 1.0 / i;
    }
    cout << "Tong S5 su dung vong lap for = " << setprecision(10) << sumHarmonicLoop << endl;

}
