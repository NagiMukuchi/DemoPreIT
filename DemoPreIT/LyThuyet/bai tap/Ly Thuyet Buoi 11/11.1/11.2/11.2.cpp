// 11.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Sach {
    char tuaDe[101];   // Tua de toi da 100 ky tu
    char tacGia[51];   // Tac gia toi da 50 ky tu
    int soTrang;       // So trang la so nguyen
    int giaTien;       // Gia tien la so nguyen
};

int main() {
    const int maxSach = 50;
    Sach sach[maxSach];
    int soLuongSach;

    // Yeu cau 1: Nhap so luong sach can luu tru
    cout << "Nhap so luong sach can luu tru (toi da 50): ";
    cin >> soLuongSach;
    cin.ignore(); // Bo qua ky tu xuong dong sau khi nhap so

    // Yeu cau 2: Nhap thong tin tung cuon sach
    for (int i = 0; i < soLuongSach; i++) {
        cout << "Nhap thong tin cuon sach thu " << i + 1 << ":\n";
        cout << "Tua de: ";
        cin.getline(sach[i].tuaDe, 101);
        cout << "Tac gia: ";
        cin.getline(sach[i].tacGia, 51);
        cout << "So trang: ";
        cin >> sach[i].soTrang;
        cout << "Gia tien: ";
        cin >> sach[i].giaTien;
        cin.ignore(); // Bo qua ky tu xuong dong sau khi nhap so
    }

    // Yeu cau 3: Xuat danh sach tat ca thong tin sach
    cout << "\nDanh sach thong tin sach:\n";
    for (int i = 0; i < soLuongSach; i++) {
        cout << "Cuon sach thu " << i + 1 << ":\n";
        cout << "Tua de: " << sach[i].tuaDe << "\n";
        cout << "Tac gia: " << sach[i].tacGia << "\n";
        cout << "So trang: " << sach[i].soTrang << "\n";
        cout << "Gia tien: " << sach[i].giaTien << "\n";
        cout << "--------------------------\n";
    }

    // Yeu cau 4: Tim kiem va hien thi nhung cuon sach co tu 200 trang tro len
    cout << "\nNhung cuon sach co tu 200 trang tro len:\n";
    for (int i = 0; i < soLuongSach; i++) {
        if (sach[i].soTrang >= 200) {
            cout << "Tua de: " << sach[i].tuaDe << "\n";
            cout << "Tac gia: " << sach[i].tacGia << "\n";
            cout << "So trang: " << sach[i].soTrang << "\n";
            cout << "Gia tien: " << sach[i].giaTien << "\n";
            cout << "--------------------------\n";
        }
    }

    // Yeu cau 5: Tim kiem va hien thi nhung cuon sach co gia tu 90000 tro xuong
    cout << "\nNhung cuon sach co gia tu 90000 tro xuong:\n";
    for (int i = 0; i < soLuongSach; i++) {
        if (sach[i].giaTien <= 90000) {
            cout << "Tua de: " << sach[i].tuaDe << "\n";
            cout << "Tac gia: " << sach[i].tacGia << "\n";
            cout << "So trang: " << sach[i].soTrang << "\n";
            cout << "Gia tien: " << sach[i].giaTien << "\n";
            cout << "--------------------------\n";
        }
    }

    return 0;
}
