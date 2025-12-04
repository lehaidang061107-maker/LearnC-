/*  Nhập vào 2 số nguyên a và b. Hãy hoán đổi giá trị của 2 số đó và in ra màn hình. */
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    int c = a;
    a = b;
    b = c;
    cout << "Gia tri cua a sau khi hoan doi: " << a << endl;
    cout << "Gia tri cua b sau khi hoan doi: " << b << endl;
    return 0;
}