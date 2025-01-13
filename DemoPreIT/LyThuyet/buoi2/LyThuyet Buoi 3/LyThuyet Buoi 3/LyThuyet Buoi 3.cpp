// LyThuyet Buoi 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define Pi 3.14;

int main()
{
    const double PI = 3.14;
    int number1, number2;
    int sum; // Tinh tong

    string my_Name = "Nagi Mukuchi";

    string userName;
    cout << "Kimi no nawa " << endl;
    cin >> userName;
    cout << "Hello ! " << userName << "Welcome to the rice field " << endl;

    int number1count, number2count;
    cout << "Kimi no nawa " << endl;

    cout << "My Name is "<< my_Name << endl;

    my_Name = "Ethan";
    cout << "My Name is " << my_Name << endl;

    number1 = 100;
    number2 = 13;
    sum = number1 + number2 + PI;
    cout << "Sum " << sum;
}