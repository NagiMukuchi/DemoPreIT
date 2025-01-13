// thuc hanh 3.4 SonDNX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int chieu_dai, chieu_rong;
    int chu_vi, dien_tich;

    cout << "Vui long nhap chieu dai hinh chu nhat: ";
    cin >> chieu_dai;
    cout << "Vui long nhap chieu rong hinh chu nhat: ";
    cin >> chieu_rong;

    chu_vi = (chieu_dai + chieu_rong)*2;
    cout << "Chu vi hinh chu nhat la: " << chu_vi << " cm."<<endl;

    dien_tich = chieu_dai * chieu_rong;
    cout << "Dien tich hinh chu nhat la: " << dien_tich << " cm." << endl;

}