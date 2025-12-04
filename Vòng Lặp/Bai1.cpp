/*  Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1 + 2 + 3 + ... + n.*/
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
        s += i;
    }
    cout << " S = " << s << endl;
    return 0;
}