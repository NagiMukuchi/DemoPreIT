// 7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    for (int i = 0; i < n; i++) {
        cout << "Nhap cac phan tu cua mang: ";
        cin >> arr[i];
    }

    int A, B, X, Y;

    // Yeu cau 1: Yeu cau nguoi dung nhap vao gia tri A. Tim kiem cac phan tu gia tri so chan co gia tri nho hon hoac bang A.
    cout << "Nhap gia tri A: ";
    cin >> A;
    cout << "Cac phan tu gia tri so chan co gia tri nho hon hoac bang A: ";
    for (int i = 0; i < n; i += 2) { // chi so chan
        if (arr[i] <= A) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // Yeu cau 2: Yeu cau nguoi dung nhap vao gia tri B. Dem so lan xuat hien cua cac phan tu mang gia tri trung voi gia tri B.
    int countB = 0;
    cout << "Nhap gia tri B: ";
    cin >> B;
    for (int i = 0; i < n; i++) {
        if (arr[i] == B) {
            countB++;
        }
    }
    cout << "So lan xuat hien cua cac phan tu mang gia tri trung voi B: " << countB << endl;

    // Yeu cau 3: Yeu cau nguoi dung nhap vao 2 gia tri X, Y. Liet ke cac phan tu co gia tri nam trong pham vi tu X den Y.
    cout << "Nhap gia tri X: ";
    cin >> X;
    cout << "Nhap gia tri Y: ";
    cin >> Y;
    cout << "Cac phan tu co gia tri nam trong pham vi tu X den Y: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] >= X && arr[i] <= Y) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
