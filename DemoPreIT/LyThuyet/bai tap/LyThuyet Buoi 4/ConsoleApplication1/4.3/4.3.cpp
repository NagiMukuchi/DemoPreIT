// SonDNX 4.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const float PI = 3.14;

// Ham tinh chu vi cua hinh tron
float tinh_chu_vi(float ban_kinh) {
    return 2 * PI * ban_kinh;
}

// Ham tinh dien tich cua hinh tron
float tinh_dien_tich(float ban_kinh) {
    return PI * ban_kinh * ban_kinh;
}

int main() {
    float ban_kinh;
    cout << "Nhap ban kinh cua hinh tron: ";
    cin >> ban_kinh;

    float chu_vi = tinh_chu_vi(ban_kinh);
    float dien_tich = tinh_dien_tich(ban_kinh);

    cout << "Chu vi cua hinh tron la: " << chu_vi << endl;
    cout << "Dien tich cua hinh tron la: " << dien_tich << endl;

}
