// 6.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen duong n: " << endl;
        cin >> n;
        if (n < 0)
        {
            cout << "N phai >= 0. Vui long nhap lai." << endl;
        }
    } while (n < 0);
    cout << "So " << n << " co toan cac chu so chan hay khong?" << endl;
    int check = 1;
    while (n /= 10)
    {
        if ((n % 10) % 2 == 1)
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
    {
        cout << "chua toan chu so chan" << endl;
    }
    else
    {
        cout << "khong chua toan chu so chan" << endl;
    }
}
