// SonDNX 5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;

    if (b == 0) {
        cout << "Khong the chia cho 0" << endl;
    }
    else if (a % b == 0) {
        cout << a << " chia het cho " << b << endl;
    }
    else {
        cout << a << " khong chia het cho " << b << endl;
    }
}

