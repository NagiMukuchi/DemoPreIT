// SonDNX S6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


using namespace std;

int main() {
    int N;
    double S6 = 0.0;
    cout << "Nhap so tu nhien N = ";
    cin >> N;

    cout << "S6 = ";
    for (int i = 1; i <= N; ++i) {
        S6 += 1.0 / (2 * i);
        cout << "1/" << 2 * i;
        if (i < N) {
            cout << " + ";
        }
    }
    cout << " = " << S6 << endl;

}