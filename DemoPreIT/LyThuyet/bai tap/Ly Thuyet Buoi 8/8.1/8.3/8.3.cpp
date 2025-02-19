// 8.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Ham tinh tong a + b
int TinhTong(int a, int b) {
    return a + b;
}

// Ham tinh hieu a - b
int TinhHieu(int a, int b) {
    return a - b;
}

// Ham tinh tich a * b
int TinhTich(int a, int b) {
    return a * b;
}

// Ham tinh thuong a / b
float TinhThuong(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    }
    else {
        cout << "Loi: Khong the chia cho 0." << endl;
        return 0;
    }
}

int main() {
    int a, b;
    int lua_chon;

    // Yeu cau nhap vao 2 so nguyen a, b
    cout << "Nhap vao so nguyen a: ";
    cin >> a;
    cout << "Nhap vao so nguyen b: ";
    cin >> b;

    // Hien thi menu va yeu cau nguoi dung chon chuc nang
    do {
        cout << "Chon chuc nang tinh toan:" << endl;
        cout << "1. Tinh tong a + b" << endl;
        cout << "2. Tinh hieu a - b" << endl;
        cout << "3. Tinh tich a * b" << endl;
        cout << "4. Tinh thuong a / b" << endl;
        cout << "Chon cach tinh: ";
        cin >> lua_chon;

        if (lua_chon < 1 || lua_chon > 4) {
            system("cls");
            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }
    } while (lua_chon < 1 || lua_chon > 4);

    // Chon phep tinh
    switch (lua_chon) {
    case 1:
        cout << "Tong cua " << a << " va " << b << " la: " << TinhTong(a, b) << endl;
        break;
    case 2:
        cout << "Hieu cua " << a << " va " << b << " la: " << TinhHieu(a, b) << endl;
        break;
    case 3:
        cout << "Tich cua " << a << " va " << b << " la: " << TinhTich(a, b) << endl;
        break;
    case 4:
        cout << "Thuong cua " << a << " va " << b << " la: " << TinhThuong(a, b) << endl;
        break;
    default:
        cout << "Lua chon khong hop le." << endl;
        break;
    }

}
