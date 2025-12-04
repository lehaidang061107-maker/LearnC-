/*  Nhập 1 số nguyên dương n. In ra màn hình giai thừa n!.*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << " n = ";
    cin >> n;
    unsigned long long s = 1;
    for ( int i = 1; i <= n; i++)
    {
        s *= i;
    }
    cout << " n! = " << s << endl;
    return 0;
}