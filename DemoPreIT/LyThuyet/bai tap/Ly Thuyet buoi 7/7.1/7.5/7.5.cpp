// 7.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

const int Gioi_Han = 20;

void NhapMang(int& Soluong, int Arr[]) {
    cout << "Nhap vao so luong phan tu (toi da " << Gioi_Han << "): ";
    cin >> Soluong;
    for (int i = 0; i < Soluong; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> Arr[i];
    }
}

void XuatMang(int Soluong, int Arr[]) {
    cout << "Cac phan tu trong mang: ";
    for (int i = 0; i < Soluong; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

void HoanVi(int& a, int& b) {
    int gia_tri = a;
    a = b;
    b = gia_tri;
}

void BubbleSort(int Soluong, int Arr[]) {
    for (int i = 0; i < Soluong - 1; i++) {
        for (int j = 0; j < Soluong - i - 1; j++) {
            if (Arr[j] > Arr[j + 1]) {
                HoanVi(Arr[j], Arr[j + 1]);
            }
        }
    }
}

void SelectionSort(int Soluong, int Arr[]) {
    for (int i = 0; i < Soluong - 1; i++) {
        int lon_nhat = i;
        for (int j = i + 1; j < Soluong; j++) {
            if (Arr[j] > Arr[lon_nhat]) {
                lon_nhat = j;
            }
        }
        HoanVi(Arr[lon_nhat], Arr[i]);
    }
}

int main() {
    int a[Gioi_Han], n;

    NhapMang(n, a);

    cout << "Mang sau khi sap xep tang dan (BubbleSort):" << endl;
    BubbleSort(n, a);
    XuatMang(n, a);

    cout << "Mang sau khi sap xep giam dan (SelectionSort):" << endl;
    SelectionSort(n, a);
    XuatMang(n, a);

    return 0;
}
