// 7.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const int MAX = 6;

void NhapMang(int& n, int a[]) {
    cout << "Nhap so luong phan tu N: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void XuatMang(int n, int a[]) {
    cout << "Cac phan tu trong mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[MAX] = { 2, 3, 4, 5 };
    int n = 4; // So luong phan tu hien tai trong mang

    // In mang ban dau
    cout << "Mang ban dau: ";
    XuatMang(n, a);

    // Yeu cau 1: Them gia tri 6 vao phan tu o vi tri cuoi mang
    if (n < MAX) {
        a[n] = 6;
        n++;
    }
    else {
        cout << "Mang da day, khong the them phan tu moi." << endl;
    }

    // In mang sau khi them 6 vao cuoi
    cout << "Mang sau khi them 6 vao cuoi: ";
    XuatMang(n, a);

    // Yeu cau 2: Them gia tri 1 vao phan tu o vi tri dau mang
    if (n < MAX) {
        for (int i = n; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = 1;
        n++;
    }
    else {
        cout << "Mang da day, khong the them phan tu moi." << endl;
    }

    // In mang sau khi them 1 vao dau
    cout << "Mang sau khi them 1 vao dau: ";
    XuatMang(n, a);

    return 0;
}
