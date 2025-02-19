// 8.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

// Ham Binh Phuong 
int BinhPhuong(int so) {
    return so * so;
}

// Ham Can Bac Hai
float CanBacHai(int so) {
    return sqrt(so);
}

int main() {
    int N;

    // Yeu cau nhap so
    cout << "Nhap vao mot so N: ";
    cin >> N;

    // Goi ham Binh Phuong va xuat ket qua ra man hinh
    int binhPhuong = BinhPhuong(N);
    cout << "Binh phuong cua " << N << " la: " << binhPhuong << endl;

    // Goi ham Can Bac Hai va xuat ket qua ra man hinh
    float canBacHai = CanBacHai(N);
    cout << "Can bac hai cua " << N << " la: " << canBacHai << endl;
}
