// 11.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct BaiHat {
    string maBaiHat;
    string tenBaiHat;
    int luotNghe;
};

int main() {
    const int MAX_BAI_HAT = 100; // Gioi han so luong bai hat
    BaiHat danhSachBaiHat[MAX_BAI_HAT];
    int soLuongBaiHat = 0;

    // Doc du lieu tu file
    ifstream finput("C:\\Users\\Admin\\Documents\\PreIT\\DemoPreIT\\DemoPreIT\\PreIT-11-4.txt");
    if (!finput.is_open()) {
        cout << "Khong the mo file du lieu!" << endl;
        return -1;
    }

    while (soLuongBaiHat < MAX_BAI_HAT && finput >> danhSachBaiHat[soLuongBaiHat].maBaiHat
        >> danhSachBaiHat[soLuongBaiHat].luotNghe) {
        finput.ignore(); // Bo qua ky tu xuong dong
        getline(finput, danhSachBaiHat[soLuongBaiHat].tenBaiHat); // Doc ten bai hat
        soLuongBaiHat++;
    }
    finput.close();

    // Kiem tra danh sach co rong hay khong
    if (soLuongBaiHat == 0) {
        cout << "Danh sach bai hat rong!" << endl;
        return 0;
    }

    // Tim bai hat HIT (ca khuc co luot nghe cao nhat)
    BaiHat baiHatHit = danhSachBaiHat[0];
    for (int i = 1; i < soLuongBaiHat; i++) {
        if (danhSachBaiHat[i].luotNghe > baiHatHit.luotNghe) {
            baiHatHit = danhSachBaiHat[i];
        }
    }
    cout << "Ca khuc HIT: " << baiHatHit.tenBaiHat
        << " (" << baiHatHit.luotNghe << " luot nghe)" << endl;

    // Sap xep danh sach theo luot nghe giam dan (thay the `sort()` bang sap xep noi bot)
    for (int i = 0; i < soLuongBaiHat - 1; i++) {
        for (int j = i + 1; j < soLuongBaiHat; j++) {
            if (danhSachBaiHat[j].luotNghe > danhSachBaiHat[i].luotNghe) {
                // Hoan doi vi tri
                BaiHat temp = danhSachBaiHat[i];
                danhSachBaiHat[i] = danhSachBaiHat[j];
                danhSachBaiHat[j] = temp;
            }
        }
    }

    // Hien thi bang xep hang
    cout << "\nDanh sach xep hang:" << endl;
    cout << left << setw(15) << "Ma Bai Hat"
        << setw(30) << "Ten Bai Hat"
        << setw(15) << "Luot Nghe" << endl;
    cout << string(60, '-') << endl;

    for (int i = 0; i < soLuongBaiHat; i++) {
        cout << left << setw(15) << danhSachBaiHat[i].maBaiHat
            << setw(30) << danhSachBaiHat[i].tenBaiHat
            << setw(15) << danhSachBaiHat[i].luotNghe << endl;
    }

    return 0;
}

