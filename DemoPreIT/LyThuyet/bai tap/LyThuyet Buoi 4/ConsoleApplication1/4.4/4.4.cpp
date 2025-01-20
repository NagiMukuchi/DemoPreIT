// SonDNX 4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Khai bao bien
    double x;

    cout << "Chuong trinh tinh ham so 3x^3 - 5x^2 + 6" << endl;
    cout << "Nhap gia tri cua x = "<< endl;
    cin >> x;

    double y = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
    cout << "3*" << x << "^3 - 5*" << x << "^2 + 6 = " << y << endl;
}