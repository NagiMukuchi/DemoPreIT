// 6.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cout << "Nhap so nguyen duong a: ";
    cin >> a;
    cout << "Nhap so nguyen duong b: ";
    cin >> b;

    // Xu ly truong hop so am bang cach chuyen thanh so duong
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Neu mot trong hai so la 0 thi Uoc so chung lon nhat la so con lai
    if (a == 0 || b == 0) {
        cout << "Uoc so chung lon nhat la: " << (a + b) << endl;
        return 0;
    }

    // Su dung thuat toan tru so lon hon cho so nho hon
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    // Khi a va b bang nhau thi dung lai va a hoac b la Uoc so chung lon nhat
    cout << "Uoc so chung lon nhat la: " << a << endl;

    return 0;
}
