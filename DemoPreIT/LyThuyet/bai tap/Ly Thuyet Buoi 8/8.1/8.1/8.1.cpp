// 8.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void BangCuuChuong(int n) {
    for (int i = 1; i <= 9; i++) {
        cout << i << " x " << n << " = " << i * n << endl;
    }
}

int main() {
    int N;

    // user nhap vao gia tri bang cuu chuong
    cout << "Nhap gia tri cua N: ";
    cin >> N;

    BangCuuChuong(N);
}
