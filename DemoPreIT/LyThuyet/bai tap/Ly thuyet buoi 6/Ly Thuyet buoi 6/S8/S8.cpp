// S8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// Ham tinh giai thua cua mot so nguyen
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    cout << "Nhap so nguyen N: "<< endl;
    cin >> N;

    long long S8 = 1;

    cout << "S8 = ";
    for (int i = 1; i <= N; ++i) {
        S8 *= i;
        cout << i;
        if (i < N) {
            cout << " * ";
        }
    }
    cout << " = " << S8 << endl;

    return 0;
}
