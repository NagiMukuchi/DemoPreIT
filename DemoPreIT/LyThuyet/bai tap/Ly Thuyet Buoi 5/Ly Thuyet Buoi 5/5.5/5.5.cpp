// SonDNX 5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    char kytu;
    cout << "Nhap vao 1 ky tu: ";
    cin >> kytu;

    if (kytu >= 'A' && kytu <= 'Z') {
        cout << "Ky tu nhap vao la chu hoa." << endl;
    }
    else if (kytu >= 'a' && kytu <= 'z') {
        cout << "Ky tu nhap vao la chu thuong." << endl;
    }
    else {
        cout << "Ky tu nhap vao khong phai la chu cai." << endl;
    }
}
