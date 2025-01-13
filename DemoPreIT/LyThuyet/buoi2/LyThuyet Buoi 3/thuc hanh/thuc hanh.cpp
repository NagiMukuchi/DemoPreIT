// thuc hanh 3.1 SonDNX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int BIRTHYEAR, curentYear;
    int age;
    string MYNAME = "sondnx";

    BIRTHYEAR = 1997;
    curentYear = 2025;
    age = curentYear - BIRTHYEAR;

    cout << "Hello ! My name is " << MYNAME << endl;
    cout << "I am " << age << " years old." << endl;
}
