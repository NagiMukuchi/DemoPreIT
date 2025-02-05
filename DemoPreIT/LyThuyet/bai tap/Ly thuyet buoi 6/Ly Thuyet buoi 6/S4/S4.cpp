// SonDNX S4 = 1 - 2 + 3 - 4 + ... +-N .cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int Tong = (N % 2 == 0) ? -(N / 2) : (N / 2 + 1);
    cout << "Tong S4 su dung cong thuc = " << Tong << endl;

    // Su dung vong lap for
    int TongFor = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            TongFor -= i; // Tru so chan
        }
        else {
            TongFor += i; // Cong so le
        }
    }
    cout << "Tong S4 su dung vong lap for = " << TongFor << endl;

}

