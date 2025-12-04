/*  Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << " n = ";
    cin >> n;
    int sum = 0;

    while ( n > 0 )
    {
        sum += n % 10;
        n /= 10;

    }
    cout << " Ket qua la: " << sum << endl;

    return 0;
}