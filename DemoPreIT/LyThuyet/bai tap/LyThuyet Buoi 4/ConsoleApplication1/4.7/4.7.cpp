// 4.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int num_cassette, num_video, num_vcd_short, num_vcd_long;
    int fee_cassette = 1000, fee_video = 10000, fee_vcd_short = 50000, fee_vcd_long = 100000;
    float rental_price_cassette = 5000, rental_price_video = 5000, rental_price_vcd = 10000;
    float deposit_fee = 100000;

    std::cout << "Nhap so luong bang cassette: ";
    std::cin >> num_cassette;
    std::cout << "Nhap so luong bang video: ";
    std::cin >> num_video;
    std::cout << "Nhap so luong dia VCD thue 03 ngay: ";
    std::cin >> num_vcd_short;
    std::cout << "Nhap so luong dia VCD thue 05 ngay: ";
    std::cin >> num_vcd_long;

    float total_rental_fee = num_cassette * rental_price_cassette + num_video * rental_price_video +
        num_vcd_short * rental_price_vcd + num_vcd_long * rental_price_vcd;
    float total_deposit_fee = deposit_fee;

    std::cout << "Tong tien thue bang dia la: " << total_rental_fee << " VNĐ\n";
    std::cout << "Tong tien dat coc la: " << total_deposit_fee << " VNĐ\n";
    std::cout << "Tong so tien can tra la: " << total_rental_fee + total_deposit_fee << " VNĐ\n";
}
