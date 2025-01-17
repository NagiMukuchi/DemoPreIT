// SonDNX Ly Thuyet Buoi 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Nhap mot so tu 1 den 10: ";
    cin >> number;

    switch (number) {
    case 1:
        cout << "Nhat" << endl;
        break;
    case 2:
        cout << "Nhi" << endl;
        break;
    case 3:
        cout << "Tam" << endl;
        break;
    case 4:
        cout << "Tu" << endl;
        break;
    case 5:
        cout << "Ngu" << endl;
        break;
    case 6:
        cout << "Luc" << endl;
        break;
    case 7:
        cout << "That" << endl;
        break;
    case 8:
        cout << "Bat" << endl;
        break;
    case 9:
        cout << "Cuu" << endl;
        break;
    case 10:
        cout << "Thap" << endl;
        break;
        cout << "So khong hop le!" << endl;
    }
}

