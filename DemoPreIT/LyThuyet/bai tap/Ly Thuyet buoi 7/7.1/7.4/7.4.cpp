// 7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Khai bao mang dong cac so nguyen
    int* arr = new int[n];

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << "Nhap cac phan tu cua mang: ";
        cin >> arr[i];
    }

}