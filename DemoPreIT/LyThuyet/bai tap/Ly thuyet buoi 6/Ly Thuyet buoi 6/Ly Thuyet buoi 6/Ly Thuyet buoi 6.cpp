// SonDNX Ly Thuyet buoi 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main() {
    for (int i = 65; i <= 90; ++i) { // 65 = A, 90 =Z
        cout << (char)i << " "; // Chuyen doi so nguyen sang ky tu
        if ((i - 65 + 1) % 6 == 0) {
            cout << endl;
        }
    }
}
