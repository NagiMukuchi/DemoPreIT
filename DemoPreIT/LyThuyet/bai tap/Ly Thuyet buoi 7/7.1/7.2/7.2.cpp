#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    float can_nang[20] = { 36.5, 98, 27.8, 63, 78.1, 48.3, 69, 72, 41.5, 32, 29.5, 120, 52.3, 23, 50.2, 56, 72.5, 70, 68.4, 65 };
    int n = 20;
    int trung_binh = 0;
    float tong = 0;
    float min_can_nang = can_nang[0], max_can_nang = can_nang[0];
    int minIndex = 0, maxIndex = 0;

    // Yeu cau 1: Liet ke danh sach cac ung vien thieu can, thua can
    cout << "Ung vien thieu can: " << endl;
    for (int i = 0; i < n; i++) {
        if (can_nang[i] < 38) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Ung vien thua can: " << endl;
    for (int i = 0; i < n; i++) {
        if (can_nang[i] > 75) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Yeu cau 2: Tim kiem ung vien co can nang thap nhat, cao nhat
    for (int i = 1; i < n; i++) {
        if (can_nang[i] < min_can_nang) {
            min_can_nang = can_nang[i];
            minIndex = i;
        }
        if (can_nang[i] > max_can_nang) {
            max_can_nang = can_nang[i];
            maxIndex = i;
        }
    }
    cout << "Ung vien co can nang thap nhat: " << min_can_nang << " kg tai vi tri " << minIndex << endl;
    cout << "Ung vien co can nang cao nhat: " << max_can_nang << " kg tai vi tri " << maxIndex << endl;

    // Yeu cau 3 va 4: Dem so luong ung vien dat tieu chuan va tinh can nang trung binh
    for (int i = 0; i < n; i++) {
        if (can_nang[i] >= 38 && can_nang[i] <= 75) {
            trung_binh++;
            tong += can_nang[i];
        }
    }
    float trung_binh_can_nang = (trung_binh > 0) ? tong / trung_binh : 0;
    cout << "So luong ung vien dat tieu chuan: " << trung_binh << endl;
    cout << "Can nang trung binh cua cac ung vien dat tieu chuan: " << trung_binh_can_nang << " kg\n";

    return 0;
}

