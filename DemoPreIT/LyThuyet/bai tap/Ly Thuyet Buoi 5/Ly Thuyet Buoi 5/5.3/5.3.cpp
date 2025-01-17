// SonDNX 5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap so nguyen N: ";
    cin >> N;

    if (N % 2 == 0) {
        cout << N << " la so chan." << endl;
    }
    else {
        cout << N << " la so le." << endl;
    }
}
