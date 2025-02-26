// 11 draft.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

struct Book {
    string Title;
    string Author;
    int Pages;
    int Price;
};

int main() {
    ifstream finput("C:\\Users\\Admin\\Documents\\PreIT\\DemoPreIT\\DemoPreIT\\PreIT-11-2.txt"); // data file path on current computer
    Book sachs[100];
    int n = 0;

    if (!finput.is_open()) {
        cout << "Unable to open data file" << endl;
        return -1;
    }

    string str;
    while (getline(finput, sachs[n].Title)) { // Using getline in condition
        getline(finput, sachs[n].Author);

        getline(finput, str);
        sachs[n].Pages = stoi(str);

        getline(finput, str);
        sachs[n].Price = stoi(str);

        n++;
    }
    finput.close(); // Close the file

    // Requirement 3: Output a list of all book information
    cout << "List of all book information" << endl;
    cout << setw(43) << "Name | " << setw(33) << "Author | " << setw(23) << "Pages | " << setw(22) << "Price |" << endl;
    cout << string(130, '-') << endl; // Separator line

    for (int i = 0; i < n; i++) {
        cout << setw(40) << sachs[i].Title << " | ";
        cout << setw(30) << sachs[i].Author << " | ";
        cout << setw(20) << sachs[i].Pages << " | ";
        cout << setw(20) << sachs[i].Price << " |" << endl;
    }

    return 0;
}
