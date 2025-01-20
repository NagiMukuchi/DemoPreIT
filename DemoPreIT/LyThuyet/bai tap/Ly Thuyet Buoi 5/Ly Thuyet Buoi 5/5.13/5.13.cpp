// SonDNX 5.13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int thang, namNhuan;
    cout << "Nhap thang (1-12): ";
    cin >> thang;

    switch (thang) {
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12:
        cout << "Thang " << thang << " co 31 ngay." << endl;
        break;
    case 4: 
    case 6: 
    case 9: 
    case 11:
        cout << "Thang " << thang << " co 30 ngay." << endl;
        break;
    case 2:
        cout << "Ban muon biet so ngay cua thang Hai thuoc nam nhuan hay khong nhuan? (1: Nam nhuan, 0: Nam khong nhuan): ";
        cin >> namNhuan;
        if (namNhuan == 1) {
            cout << "Thang 2 co 29 ngay." << endl;
        }
        else {
            cout << "Thang 2 co 28 ngay." << endl;
        }
        break;
    default:
        cout << "Thang khong hop le." << endl;
    }
}
