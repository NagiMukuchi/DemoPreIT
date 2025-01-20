// SonDNX 4.1 .cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    double x; 
    // Nhap vao so x
    std::cout << "Nhap vao so x: "; 
    std::cin >> x; 
    // Tinh luy thua va can bac 2 cua x 
    double luy_thua = pow(x, 2); 
    double can_bac_2 = sqrt(x);
    // Ket qua
    std::cout << "Luy thua cua " << x << " la: " << luy_thua << endl;
    std::cout << "Can bac 2 cua " << x << " la: " << can_bac_2 << endl; 
}