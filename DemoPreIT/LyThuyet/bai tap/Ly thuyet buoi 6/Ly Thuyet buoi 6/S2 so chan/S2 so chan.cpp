// S2 = 2 + 4 + 6 + ... + N so chan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int N;
    cout << "Nhap so N: ";
    cin >> N;

    // Su dung cong thuc
    int Tong = (N / 2) * ((N / 2) + 1);
    cout << "Tong S su dung cong thuc = " << Tong << endl;

    // Su dung vong lap for
    int TongFor = 0;
    for (int i = 2; i <= N; i += 2) {
        TongFor += i;
    }
    cout << "Tong S su dung vong lap for = " << TongFor << endl;

}