/*  Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1^2 + 2^2 + 3^2 + ... + n^2.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Nhap So Nguyen Duong n: ";
    cin >> n;
    int s = 0;
    for ( int i = 1; i <= n; i++)
    {
        s += (i * i);
    }
    cout << " S = " << s << endl;
    return 0;
}