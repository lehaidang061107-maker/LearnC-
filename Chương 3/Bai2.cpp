/*  Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " n = ";
    cin >> n;
    int sum = 0;
    for ( int i = 1; i <= n; i ++)
    {
        if ( i % 2 == 1)
        {
            sum += i;

        }
    }
    cout << " Ket qua la: " << sum << endl;
    return 0;
}