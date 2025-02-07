// S9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Ham tinh giai thua cua mot so nguyen
long long factorial(int n) {
    long long result = 1;
    for (int i = n; i > 0; --i) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    cout << "Nhap so nguyen N: ";
    cin >> N;

    long long S9 = 0;
    cout << "S9 = ";
    for (int i = 1; i <= N; ++i) {
        S9 += factorial(i);
        cout << i << "!";
        if (i < N) {
            cout << " + ";
        }
    }
    cout << " = " << S9 << endl;

    return 0;
}

