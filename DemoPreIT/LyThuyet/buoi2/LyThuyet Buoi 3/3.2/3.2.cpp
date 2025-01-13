// thuc hanh 3.2 SonDNX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int numberA, numberB;
    int tong, hieu, tich, thuong; // Tinh tong, hieu, tich, thuong

    cout << "Vui long nhap so nguyen A: ";
    cin >> numberA;
    cout << "Vui long nhap so nguyen B: ";
    cin >> numberB;

    tong = numberA + numberB;
    cout << "Tong A cong B: " << tong << endl;

    hieu = numberA - numberB;
    cout << "Hieu A tru B: " << hieu << endl;

    tich = numberA * numberB;
    cout << "Tich A nhan B: " << tich << endl;

    thuong = numberA / numberB;
    cout << "Thuong A chia B: " << thuong << endl;
    
}