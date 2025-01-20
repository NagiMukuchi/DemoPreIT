// SonDNX 5.14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main() {
    double a, b;
    char T;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap ky tu T (+, -, *, /): ";
    cin >> T;

    switch (T) {
    case '+':
        cout << "Ket qua: " << a + b << endl;
        break;
    case '-':
        cout << "Ket qua: " << a - b << endl;
        break;
    case '*':
        cout << "Ket qua: " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << "Ket qua: " << a / b << endl;
        }
        else {
            cout << "Khong the chia cho 0" << endl;
        }
        break;
    default:
        cout << "Khong tinh duoc" << endl;
        break;
    }
}
