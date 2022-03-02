#include <iostream>
using namespace std;

int main() {
    int ngay_sinh = 807; // biến ngày sinh có gia trị 1511
    int* contro; // khai báo biến con trỏ
    contro = &ngay_sinh; // gán cho biến con trỏ địa chỉ của biến ngay_sinh
    cout << contro << endl; // in ra địa chỉ biến ngay_sinh
    cout << *contro << endl; // in ra giá trị được lưu trữ ở biến ngay_sinh
    return 0;
}