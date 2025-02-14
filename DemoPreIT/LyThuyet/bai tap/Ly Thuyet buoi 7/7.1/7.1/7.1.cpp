// 7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    // Khai bao mang luu tru cac so nguyen
    int arr[15] = { 10, 25, -4, 32, 63, 81, 19, -24, 13, 18, 45, 12, 72, 42, -6 };
    int n = 15;

    // Yeu cau 1: Liet ke vi tri va gia tri cac phan tu la so chan
    cout << "Yeu cau 1: Cac phan tu la so chan: " << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << "Vi tri: " << i << ", Gia tri: " << arr[i] << endl;
        }
    }
    cout << endl; // Cach dong

    // Yeu cau 2: Dem cac phan tu co gia tri chia het cho 3
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    cout << "Yeu cau 2: So phan tu chia het cho 3: " << count << endl;
    cout << endl;// Cach dong

    // Yeu cau 3: Tinh tong gia tri cac phan tu co gia tri la so chan
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    cout << "Yeu cau 3: Tong gia tri cac phan tu co gia tri la so chan: " << sum << endl;
    cout << endl;// Cach dong

    

    // Yeu cau 5: Sap xep day so theo thu tu tang dan va in ra man hinh
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Hoan doi hai gia tri
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << endl;// Cach dong
    cout << "Yeu cau 5: Day so sap xep theo thu tu tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;// Cach dong

    // Yeu cau 6: Sap xep day so theo thu tu giam dan va in ra man hinh
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Hoan doi hai gia tri
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl;// Cach dong
    cout << "Yeu cau 6: Day so sap xep theo thu tu giam dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;// Cach dong
    // Yeu cau 7: Tim kiem va hien thi tri so cua cac phan tu co gia tri am. Thay the cac phan tu co gia tri am bang gia tri 0
    cout << "Yeu cau 7: Cac phan tu co gia tri am: " << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << "Vi tri: " << i << ", Gia tri: " << arr[i] << endl;
            arr[i] = 0; // Thay the gia tri am bang gia tri 0
        }
    }
    cout << endl;// Cach dong

    // In lai mang sau khi thay the
    cout << "Mang sau khi thay the cac phan tu am bang 0: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;// Cach dong

    return 0;
}