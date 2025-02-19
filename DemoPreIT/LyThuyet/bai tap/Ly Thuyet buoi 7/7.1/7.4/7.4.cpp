#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

void NhapMang(int& n, int a[]) {
    cout << "Nhap so luong phan tu N: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

bool KiemTraDoiXung(int n, int a[]) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[100], n;
    NhapMang(n, a);

    if (KiemTraDoiXung(n, a)) {
        cout << "Mang doi xung!" << endl;
    }
    else {
        cout << "Mang khong doi xung!" << endl;
    }

    return 0;
}
