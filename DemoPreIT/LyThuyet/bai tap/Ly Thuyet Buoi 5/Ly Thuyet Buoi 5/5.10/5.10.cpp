// SonDNX 5.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int km;
    double tien = 0;

    cout << "Nhap so km da di: ";
    cin >> km;

    if (km == 1) {
        tien = 15000;
    }
    else if (km >= 2 && km <= 5) {
        tien = 15000 + (km - 1) * 13500;
    }
    else {
        tien = 15000 + 4 * 13500 + (km - 5) * 11000;
    }

    if (km >= 20) {
        tien *= 0.9; // Ap dung giam gia 10%
    }

    cout << "Tong so tien: " << tien << " VND" << endl;

}


