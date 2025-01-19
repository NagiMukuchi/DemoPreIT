// SonDNX 5.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tnct; // TNCT
    double luongCanBan = 650000, heSo, luong;

    // Nhap tham nien cong tac
    cout << "Nhap thoi gian tham nien cong tac (thang): ";
    cin >> tnct;

    // Xac dinh he so dua tren tham nien cong tac
    if (tnct < 12) {
        heSo = 1.92;
    }
    else if (tnct < 36) {
        heSo = 2.34;
    }
    else if (tnct < 60) {
        heSo = 3;
    }
    else {
        heSo = 4.5;
    }

    // Tinh luong
    luong = heSo * luongCanBan;

    // Xuat ket qua
    cout << fixed << setprecision(0); // Dinh dang dau ra de khong hien thi so le
    cout << "Luong cua nhan vien la: " << luong << " VND" << endl;
}

