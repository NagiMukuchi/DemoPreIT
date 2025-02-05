// SonDNX 6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int N;
    cout << "Nhap so N: ";
    cin >> N;

    // Su dung cong thuc
    int Tong = N * (N + 1) / 2;
    cout << "Tong S su dung cong thuc = " << Tong << endl;

    // Su dung vong lap for
    int TongFor = 0;
    for (int i = 1; i <= N; ++i) {
        TongFor += i;
    }
    cout << "Tong S su dung vong lap for = " << TongFor << endl;

}
