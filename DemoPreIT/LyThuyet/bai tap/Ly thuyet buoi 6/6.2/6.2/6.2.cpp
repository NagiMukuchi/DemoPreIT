// SonDNX 6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Nhap so N: ";
    cin >> N;

    // Su dung vong lap for
    int sumFor = 0;
    for (int i = 1; i <= N; ++i) {
        sumFor += i;
    }
    cout << "Tong S su dung vong lap for = " << sumFor << endl;

    // Su dung cong thuc
    int sumFormula = N * (N + 1) / 2;
    cout << "Tong S su dung cong thuc = " << sumFormula << endl;

    return 0;
}
