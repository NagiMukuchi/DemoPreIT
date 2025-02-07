// SonDNX S5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int N;
    double S5 = 0.0;
    cout << "Nhap so tu nhien N = ";
    cin >> N;

    cout << "S5 = ";
    for (int i = 1; i <= N; ++i) {
        S5 += 1.0 / i;
        cout << "1/" << i;
        if (i < N) {
            cout << " + ";
        }
    }
    cout << " = " << S5 << endl;

}
