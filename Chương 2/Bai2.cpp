/*  Nhập vào 1 chữ cái viết thường bất kì. Hãy in ra màn hình chữ cái đó dưới dạng viết hoa. */
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << " Nhap chu viet thuong: ";
    cin >> c;
    cout << " Chu viet hoa la: " << (char)(c - 32) << endl;
    return 0;
}