// 6.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a, b, n;
    int tong = 0;

    // Nhap ba so nguyen a, b va n
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    cout << "Nhap gioi han n: ";
    cin >> n;

    // Kiem tra dieu kien a, b < n
    if (a >= n || b >= n) {
        cout << "a va b phai nho hon n. Vui long nhap lai." << endl;
        return 0;
    }

    // Su dung vong lap de tinh tong
    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            tong += i;
        }
    }

    cout << "Tong cac so nguyen duong nho hon " << n << " chia het cho " << a << " nhung khong chia het cho " << b << " la: " << tong << endl;

    return 0;
}
