
#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
    printf("n-----------------CHUONG TRINH IN BANG CUU CHUONG------------------n");
    printf("n--------------------WEBSITE: NGUYENVANHIEU.VN---------------------n");
    string s;
    for (int j = 0; j < 10;j++) {
        for (int i = 1; i <= 5; i++) {
            s = to_string(i) + " x " + to_string(j) + " = " + to_string(i * j);
            printf("%20s", s.c_str());
        }
        printf("n");
    }
    printf("n");
    for (int j = 0; j < 10;j++) {
        for (int i = 6; i <= 10; i++) {
            s = to_string(i) + " x " + to_string(j) + " = " + to_string(i * j);
            printf("%20s", s.c_str());
        }
        printf("n");
    }
}

