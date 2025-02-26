// 11.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct NhanVien {
    string ma[6];
    string hoTen[51];
    string chucVu[21];
    int thamNien;
    int soNgayPhep;
};

int main() {
    // Khoi tao thong tin 5 nhan vien
    NhanVien nhanVien[5] = {
        {"DI01", "Nguyen Kim Long", "Giam doc", 47, 17},
        {"AC05", "Dau Thi Duyen", "Ke toan", 47, 25},
        {"HR03", "Tran Ha Lan", "Nhan su", 22, 7},
        {"TR02", "Tran Ngoc Thoa", "Giao vu", 13, 9},
        {"T04", "Tran Ngoc Dang", "IT", 4, 2}
    };

    // Xuat thong tin 5 nhan vien ra man hinh
    for (int i = 0; i < 5; i++) {
        cout << "Ma: " << nhanVien[i].ma << endl;
        cout << "Ho ten: " << nhanVien[i].hoTen << endl;
        cout << "Chuc vu: " << nhanVien[i].chucVu << endl;
        cout << "Tham nien cong tac: " << nhanVien[i].thamNien << endl;
        cout << "So ngay phep: " << nhanVien[i].soNgayPhep << endl;
        cout << "--------------------------" << endl; // Cach dong
    }

    return 0;
}

