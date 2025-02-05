// SonDNX S3 = 1^2 + 2^2 + 3^2 + ... + N^2 .cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int Tong = (N * (N + 1) * (2 * N + 1)) / 6;
    cout << "Tong S su dung cong thuc = " << Tong << endl;

    // Su dung vong lap for
    int TongFor = 0;
    for (int i = 1; i <= N; i++) {
        TongFor += pow(i, 2);
    }
    cout << "Tong S su dung vong lap for = " << TongFor << endl;

}