// thuc hanh 3.6 SonDNX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char a, kttrc, ktsau;

    cout << "Vui long nhap ma: ";
    cin >> a;

    ktsau = a - 1;
    kttrc = a + 1;

    cout << "Ma ASCII tuong ung: " << (int)a << endl;
    cout << "Ma ASCII phia truoc: " << (int)ktsau << endl;
    cout << "Ma ASCII phia sau: " << (int)kttrc << endl;

}