// LyThuyetBuoi2.cpp : 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // char: kieu du lieu ky tu
    char v = 205;
    char h = 186;
    char tr = 201;
    char br = 200;
    char tl = 187;
    char bl = 188;
    string text = " Welcome to Green Academy ";

    cout << tr << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << tl << endl;
    cout << h << text << h << endl;
    cout << br << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << v << bl << endl;

    //cout << "kich thuoc cua du lieu char = " << sizeof(int) << " byte" << endl;

    // char: kieu du lieu chuoi ky tu
    string name = "Nagi Mukuchi";

    // cout: console output
    std::cout << name << std::endl;

    // So nguyen
    // int: integer, co kich thuoc 4 byte
    int number = 205;

    // long: co kich thuoc 8 byte
    long largeNumber = 10000000;

    // sizeoff : size of
    cout << "number = " << number << endl;
    cout << "kich thuoc cua du lieu char = " << sizeof(int) << " byte" << endl;

    double c = 15;
    int a = 501;
    int b = 7;
    double thuong = a % b;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "b - a = " << b - a << endl;
    cout << "a * b = " << a * b << endl;
    cout << "c / b = " << c / b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << endl << endl;
    cout << "a / b = " << thuong << endl;

    //bool x = true;
    //bool y = false;

    //bool g = true && false;
    //bool h = true || false;

    //cout << "x = " << x << endl;
    //cout << "y = " << y << endl;
    //cout << "g = " << g << endl;
    //cout << "h = " << h << endl;

}
