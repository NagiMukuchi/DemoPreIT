// thuc hanh 3.5 SonDNX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int chieu_cao, canh_a, canh_b, canh_c, canh_d;
    int chu_vi, dien_tich;

    cout << "Vui long nhap chieu cao (h): ";
    cin >> chieu_cao;
    cout << "Vui long nhap chieu dai canh a: ";
    cin >> canh_a;
    cout << "Vui long nhap chieu dai canh b: ";
    cin >> canh_b;
    cout << "Vui long nhap chieu dai canh c: ";
    cin >> canh_c;
    cout << "Vui long nhap chieu dai canh d: ";
    cin >> canh_d;

    // P=a+b+2c
    chu_vi = canh_a + canh_b + (canh_c * 2);
    cout << "Chu vi hinh thang can la: " << chu_vi << " cm." << endl;

    // S=((a + b)*h)/2
    dien_tich = ((canh_a + canh_b) * chieu_cao) / 2;
    cout << "Dien tich hinh thang can la: " << dien_tich << " cm." << endl;

}