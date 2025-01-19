// SonDNX 5.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    double toan, van, anh;
    cout << "Nhap diem Toan: ";
    cin >> toan;
    cout << "Nhap diem Van: ";
    cin >> van;
    cout << "Nhap diem Anh: ";
    cin >> anh;

    double trungBinh = (toan + van + anh) / 3;

    cout << "Diem trung binh: " << trungBinh << endl;

    if (trungBinh > 8.5) {
        cout << "Xep loai: Loai A" << endl;
    }
    else if (trungBinh >= 6.5) {
        cout << "Xep loai: Loai B" << endl;
    }
    else if (trungBinh >= 5) {
        cout << "Xep loai: Loai C" << endl;
    }
    else if (trungBinh >= 3.5) {
        cout << "Xep loai: Loai D" << endl;
    }
    else {
        cout << "Xep loai: Loai F" << endl;
    }
}
