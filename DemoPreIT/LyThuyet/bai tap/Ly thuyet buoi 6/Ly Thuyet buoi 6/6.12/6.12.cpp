// 6.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int canh, chieuDai, chieuRong, chieuCao;

    // Nhap do dai canh cua hinh vuong
    cout << "Nhap do dai canh cua hinh vuong: ";
    cin >> canh;
    // Nhap chieu dai va chieu rong cua hinh chu nhat
    cout << "Nhap chieu dai cua hinh chu nhat: ";
    cin >> chieuDai;
    cout << "Nhap chieu rong cua hinh chu nhat: ";
    cin >> chieuRong;
    // Nhap chieu cao cua hinh tam giac vuong can
    cout << "Nhap chieu cao cua hinh tam giac vuong can: ";
    cin >> chieuCao;

    // Ve hinh vuong dac hinh 10
    for (int i = 0; i < canh; i++) {
        for (int j = 0; j < canh; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh vuong rong hinh 11
    for (int i = 0; i < canh; i++) {
        for (int j = 0; j < canh; j++) {
            // In dau duong vien
            if (i == 0 || i == canh - 1 || j == 0 || j == canh - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh chu nhat dac hinh 12
    for (int i = 0; i < chieuRong; i++) {
        for (int j = 0; j < chieuDai; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh chu nhat rong hinh 13
    for (int i = 0; i < chieuRong; i++) {
        for (int j = 0; j < chieuDai; j++) {
            // In dau duong vien
            if (i == 0 || i == chieuRong - 1 || j == 0 || j == chieuDai - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh tam giac vuong can dac hinh 14
    for (int i = 1; i <= chieuCao; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh tam giac vuong can rong hinh 15
    for (int i = 1; i <= chieuCao; i++) {
        for (int j = 1; j <= i; j++) {
            // In dau duong vien
            if (i == chieuCao || j == 1 || j == i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh tam giac vuong can dac hinh 16
    for (int i = 1; i <= chieuCao; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    // nay de ngan cach giua 2 hinh
    cout << endl;

    // Ve hinh tam giac vuong can hinh 17
    for (int i = chieuCao; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
