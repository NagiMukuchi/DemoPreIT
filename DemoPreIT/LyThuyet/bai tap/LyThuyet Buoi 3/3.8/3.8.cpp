// SonDNX 3.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int gio, phut, giay;

    // Nhap gio, phut, giay
    cout << "Nhap vao so gio: ";
    cin >> gio;

    cout << "Nhap vao so phut: ";
    cin >> phut;

    cout << "Nhap vao so giay: ";
    cin >> giay;

    // Chuyen doi qua tong so giay
    int tongGiay = gio * 3600 + phut * 60 + giay;

    // In ket qua
    cout << "Tong so giay la: " << tongGiay << endl;

}