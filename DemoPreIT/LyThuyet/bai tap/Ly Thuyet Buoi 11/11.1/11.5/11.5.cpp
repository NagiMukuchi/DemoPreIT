// 11.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Giay {
    string ID;      // Ma giay
    float Size;     // Kich co
    int GioiTinh;   // Gioi tinh (0: Nu, 1: Nam, 2: Unisex)
    int SoLuong;    // So luong
    float DonGia;   // Don gia
    string TenGiay; // Ten giay
};

// Ham xuat thong tin mot doi giay
void XuatGiay(const Giay& g) {
    cout << left << setw(8) << g.ID
        << setw(8) << g.Size
        << setw(12) << (g.GioiTinh == 0 ? "Nu" : (g.GioiTinh == 1 ? "Nam" : "Unisex"))
        << setw(10) << g.SoLuong
        << setw(12) << fixed << setprecision(0) << g.DonGia
        << g.TenGiay << endl;
}

// Ham doc du lieu tu file
int LoadDuLieu(Giay ds[], const string& tenFile) {
    ifstream finput(tenFile);
    if (!finput.is_open()) {
        cout << "Khong the mo file du lieu!" << endl;
        return 0;
    }
    int n = 0;
    while (finput >> ds[n].ID >> ds[n].Size >> ds[n].GioiTinh >> ds[n].SoLuong >> ds[n].DonGia) {
        finput.ignore();
        getline(finput, ds[n].TenGiay); // Doc ten giay
        n++;
    }
    finput.close();
    return n;
}

// Ham ghi du lieu vao file
void LuuFile(const Giay ds[], int n, const string& tenFile) {
    ofstream foutput(tenFile);
    for (int i = 0; i < n; i++) {
        foutput << ds[i].ID << " "
            << ds[i].Size << " "
            << ds[i].GioiTinh << " "
            << ds[i].SoLuong << " "
            << ds[i].DonGia << " "
            << ds[i].TenGiay << endl;
    }
    foutput.close();
}

// Ham nhap thong tin giay
void NhapGiay(Giay& g) {
    cout << "Nhap ID (toi da 5 ky tu): ";
    cin >> g.ID;
    cout << "Nhap Size (VD: 41.0): ";
    cin >> g.Size;
    cout << "Nhap Gioi Tinh (0: Nu, 1: Nam, 2: Unisex): ";
    cin >> g.GioiTinh;
    cout << "Nhap So Luong: ";
    cin >> g.SoLuong;
    cout << "Nhap Don Gia: ";
    cin >> g.DonGia;
    cin.ignore();
    cout << "Nhap Ten Giay: ";
    getline(cin, g.TenGiay);
}

// Ham tim kiem giay theo gioi tinh va size
void TimGiay(const Giay ds[], int n, int gioiTinh, float size) {
    bool timThay = false;
    cout << "Ket qua tim kiem:" << endl;
    for (int i = 0; i < n; i++) {
        if (ds[i].GioiTinh == gioiTinh && ds[i].Size == size) {
            XuatGiay(ds[i]);
            timThay = true;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay giay phu hop!" << endl;
    }
}

// Ham xu ly viec mua giay
void MuaGiay(Giay ds[], int& n, const string& id, int soLuongMua) {
    bool timThay = false;
    for (int i = 0; i < n; i++) {
        if (ds[i].ID == id) {
            timThay = true;
            if (ds[i].SoLuong >= soLuongMua) {
                float tongTien = soLuongMua * ds[i].DonGia;
                cout << "Mua thanh cong! Tong tien: " << tongTien << endl;
                ds[i].SoLuong -= soLuongMua;
            }
            else {
                cout << "Khong du so luong de mua!" << endl;
            }
            break;
        }
    }
    if (!timThay) {
        cout << "Khong tim thay giay voi ID: " << id << endl;
    }
}

int main() {
    const string tenFile = "C:\\Users\\Admin\\Documents\\PreIT\\DemoPreIT\\DemoPreIT\\PreIT-11-5.txt"; 
    Giay danhSach[100];
    int soLuong = LoadDuLieu(danhSach, tenFile);

    if (soLuong == 0) {
        cout << "Danh sach giay rong hoac khong the doc file!" << endl;
    }

    int luaChon;
    do {
        cout << "\n====== QUAN LY CUA HANG GIAY ======" << endl;
        cout << "1. Xuat danh sach giay" << endl;
        cout << "2. Nhap giay moi" << endl;
        cout << "3. Tim kiem giay" << endl;
        cout << "4. Mua giay" << endl;
        cout << "5. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        switch (luaChon) {
        case 1:
            cout << left << setw(8) << "ID"
                << setw(8) << "Size"
                << setw(12) << "Gioi Tinh"
                << setw(10) << "So Luong"
                << setw(12) << "Don Gia"
                << "Ten Giay" << endl;
            cout << string(60, '-') << endl;
            for (int i = 0; i < soLuong; i++) {
                XuatGiay(danhSach[i]);
            }
            break;
        case 2: {
            Giay g;
            NhapGiay(g);
            danhSach[soLuong] = g;
            soLuong++;
            LuuFile(danhSach, soLuong, tenFile);
            cout << "Nhap giay thanh cong va da luu vao file!" << endl;
            break;
        }
        case 3: {
            int gioiTinh;
            float size;
            cout << "Nhap gioi tinh (0: Nu, 1: Nam, 2: Unisex): ";
            cin >> gioiTinh;
            cout << "Nhap size giay: ";
            cin >> size;
            TimGiay(danhSach, soLuong, gioiTinh, size);
            break;
        }
        case 4: {
            string id;
            int soLuongMua;
            cout << "Nhap ID giay: ";
            cin >> id;
            cout << "Nhap so luong muon mua: ";
            cin >> soLuongMua;
            MuaGiay(danhSach, soLuong, id, soLuongMua);
            LuuFile(danhSach, soLuong, tenFile);
            break;
        }
        case 5:
            cout << "Ket thuc chuong trinh!" << endl;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
        }
    } while (luaChon != 5);

    return 0;
}

