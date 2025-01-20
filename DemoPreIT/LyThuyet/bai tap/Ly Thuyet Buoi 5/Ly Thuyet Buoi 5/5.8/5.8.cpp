// SonDNX 5.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main() {
    double diem;
    cout << "Nhap diem thi: ";
    cin >> diem;

    // Lam tron diem
    if (diem - int(diem) < 0.25) {
        diem = int(diem);
    }
    else if (diem - int(diem) <= 0.5) {
        diem = int(diem) + 0.5;
    }
    else {
        diem = int(diem) + 1;
    }

    cout << "Diem sau khi lam tron: " << diem << endl;
}

