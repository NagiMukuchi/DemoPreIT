// SonDNX 4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std; 

int main() { 
	double canh, chu_vi, dien_tich;
cout << "Nhap canh cua hinh vuong: " << endl; 
cin >> canh;

// P = 4 * canh
// S = canh * canh

chu_vi = canh * 4;
dien_tich = canh * canh;
cout << "Chu vi cua hinh vuong la: " << chu_vi << endl; 
cout << "Dien tich cua hinh vuong la: " << dien_tich << endl; 

}