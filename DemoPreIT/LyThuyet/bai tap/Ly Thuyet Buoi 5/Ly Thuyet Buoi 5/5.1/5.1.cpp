// SonDNX 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Nhap nam can kiem tra: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " la nam nhuan." << endl;
    }
    else {
        cout << year << " khong phai nam nhuan." << endl;
    }
}
