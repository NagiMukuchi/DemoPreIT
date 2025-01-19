// SonDNX 5.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int number_1, number_2, number_3;
    cout << "Nhap vao 3 so: " << endl;
    cout << "So thu 1: ";
    cin >> number_1;
    cout << "So thu 2: ";
    cin >> number_2;
    cout << "So thu 3: ";
    cin >> number_3;
    int max_number = number_1;

    if (number_2 > max_number) {
        max_number = number_2;
    }

    if (number_3 > max_number) {
        max_number = number_3;
    }

    cout << "So lon nhat trong 3 so la: " << max_number << endl;
}
