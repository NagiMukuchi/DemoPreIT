// SonDNX 3.7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    // Khai bao bien
    string tenSanPham;
    int soLuong;
    double donGia, soTienPhaiTra, tongTien, VAT;

    // Nhap du lieu
    cout << "Nhap ten san pham: ";
    cin >> tenSanPham;

    cout << "Nhap so luong: ";
    cin >> soLuong;

    cout << "Nhap don gia: ";
    cin >> donGia;

    // Tinh toan
    soTienPhaiTra = soLuong * donGia;
    VAT = soTienPhaiTra * 0.1;
    tongTien = soTienPhaiTra + VAT;

    // Xuat ket qua
    cout << "\nThong tin san pham:\n";
    cout << "Ten san pham: " << tenSanPham << endl;
    cout << "So luong: " << soLuong << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "Tong tien: " << tongTien << endl;
    cout << "Thue GTGT (10%): " << VAT << endl;
}