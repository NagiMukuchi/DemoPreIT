// 11.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct SinhVien {
    string mssv;
    string hoTen;
    string lop;
    float diemToan;
    float diemAnhVan;
    float diemTinHoc;
    float diemTB;
    string xepLoai;
};

void xepLoaiSV(SinhVien& sv) {
    sv.diemTB = (sv.diemToan + sv.diemAnhVan + sv.diemTinHoc) / 3.0;
    if (sv.diemTB >= 8.0)
        sv.xepLoai = "Gioi";
    else if (sv.diemTB >= 6.5)
        sv.xepLoai = "Kha";
    else if (sv.diemTB >= 5.0)
        sv.xepLoai = "Trung binh";
    else if (sv.diemTB >= 3.5)
        sv.xepLoai = "Yeu";
    else
        sv.xepLoai = "Kem";
}

int main() {
    const int MAX_SV = 100;
    SinhVien dsSinhVien[MAX_SV];
    int n = 0;

    ifstream finput("C:\\Users\\Admin\\Documents\\PreIT\\DemoPreIT\\DemoPreIT\\PreIT-11-3.txt"); // Duong dan file du lieu tren may hien tai

    if (!finput.is_open()) {
        cout << "Khong the mo file du lieu" << endl;
        return -1;
    }

    while (finput >> dsSinhVien[n].lop >> dsSinhVien[n].mssv >> dsSinhVien[n].diemToan >> dsSinhVien[n].diemAnhVan >> dsSinhVien[n].diemTinHoc) {
        finput.ignore();
        getline(finput, dsSinhVien[n].hoTen);
        if (finput.fail()) {
            cout << "Du lieu khong hop le tai dong " << n + 1 << endl;
            finput.clear();
            finput.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        xepLoaiSV(dsSinhVien[n]);
        n++;
    }
    finput.close();

    // Yeu cau 3: Xuat danh sach sinh vien vua load tu file
    cout << left << setw(10) << "MSSV" << setw(25) << "Ho ten" << setw(10) << "Lop" << setw(10) << "Toan" << setw(10) << "Anh Van" << setw(10) << "Tin Hoc" << setw(10) << "DTB" << setw(15) << "Xep loai" << endl;
    cout << string(100, '-') << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << dsSinhVien[i].mssv << setw(25) << dsSinhVien[i].hoTen << setw(10) << dsSinhVien[i].lop;
        cout << setw(10) << dsSinhVien[i].diemToan << setw(10) << dsSinhVien[i].diemAnhVan << setw(10) << dsSinhVien[i].diemTinHoc;
        cout << setw(10) << fixed << setprecision(2) << dsSinhVien[i].diemTB << setw(15) << dsSinhVien[i].xepLoai << endl;
    }

    // Yeu cau 4: Dem so luong sinh vien theo hoc luc
    int countGioi = 0, countKha = 0, countTB = 0, countYeu = 0, countKem = 0;
    for (int i = 0; i < n; i++) {
        if (dsSinhVien[i].xepLoai == "Gioi")
            countGioi++;
        else if (dsSinhVien[i].xepLoai == "Kha")
            countKha++;
        else if (dsSinhVien[i].xepLoai == "Trung binh")
            countTB++;
        else if (dsSinhVien[i].xepLoai == "Yeu")
            countYeu++;
        else if (dsSinhVien[i].xepLoai == "Kem")
            countKem++;
    }

    cout << "\nSo luong sinh vien theo hoc luc:" << endl;
    cout << "Gioi: " << countGioi << endl;
    cout << "Kha: " << countKha << endl;
    cout << "Trung binh: " << countTB << endl;
    cout << "Yeu: " << countYeu << endl;
    cout << "Kem: " << countKem << endl;

    // Yeu cau 5: Tim thong tin sinh vien bang MSSV
    string mssvTimKiem;
    cout << "\nNhap MSSV can tim: ";
    cin >> mssvTimKiem;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (dsSinhVien[i].mssv == mssvTimKiem) {
            cout << "Thong tin sinh vien can tim:" << endl;
            cout << left << setw(10) << "MSSV" << setw(25) << "Ho ten" << setw(10) << "Lop" << setw(10) << "Toan" << setw(10) << "Anh Van" << setw(10) << "Tin Hoc" << setw(10) << "DTB" << setw(15) << "Xep loai" << endl;
            cout << left << setw(10) << dsSinhVien[i].mssv << setw(25) << dsSinhVien[i].hoTen << setw(10) << dsSinhVien[i].lop;
            cout << setw(10) << dsSinhVien[i].diemToan << setw(10) << dsSinhVien[i].diemAnhVan << setw(10) << dsSinhVien[i].diemTinHoc;
            cout << setw(10) << fixed << setprecision(2) << dsSinhVien[i].diemTB << setw(15) << dsSinhVien[i].xepLoai << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Khong tim thay sinh vien voi MSSV " << mssvTimKiem << endl;
    }

    return 0;
}
