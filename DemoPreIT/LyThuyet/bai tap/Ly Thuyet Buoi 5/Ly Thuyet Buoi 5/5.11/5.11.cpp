// SonDNX 5.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap 3 so nguyen duong: " << endl;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Tam giac deu" << endl;
        }
        else if (a == b || b == c || a == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                cout << "Tam giac vuong can" << endl;
            }
            else {
                cout << "Tam giac can" << endl;
            }
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Tam giac vuong" << endl;
        }
        else {
            cout << "Tam giac thuong" << endl;
        }
    }
    else {
        cout << "Khong phai tam giac" << endl;
    }
}
