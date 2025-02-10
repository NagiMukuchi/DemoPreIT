// 6.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n, tmp;
    cout << "Nhap so nguyen N (lon hon 2 chu so): " << endl;
    cin >> n;
    int dao_nguoc = 0;
    while (n > 0) {
        tmp = n % 10;
        dao_nguoc = dao_nguoc * 10 + tmp;
        n = n / 10;
    }
    cout << "Ket qua dao nguoc: " << dao_nguoc << endl;
}