// 6.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int N, dem = 0;

    // Nhap so nguyen
    cout << "Nhap so nguyen N (lon hon 2 chu so): ";
    cin >> N;

    if (N < 0) {
        N = N * -1;
    }

    // neu nho hon 100 thi nhap lai
    if (N < 100) {
        cout << "N phai lon hon 2 chu so. Vui long nhap lai." << endl;
        return 0;
    }

    // dem N
    int temp = N;
    while (temp != 0) {
        temp /= 10;
        dem++;
    }

    cout << "So chu so cua " << N << " la: " << dem << endl;

    return 0;
}
