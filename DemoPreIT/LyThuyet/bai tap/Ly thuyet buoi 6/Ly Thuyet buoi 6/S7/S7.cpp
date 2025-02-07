// S7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int N;
    double S7 = 0.0;
    cout << "Nhap so tu nhien N = ";
    cin >> N;

    cout << "S7 = ";
    for (int i = 0; i <= N; ++i) {
        S7 += 1.0 / (2 * i + 1);
        cout << "1/" << 2 * i + 1;
        if (i < N) {
            cout << " + ";
        }
    }
    cout << " = " << S7 << endl;

}