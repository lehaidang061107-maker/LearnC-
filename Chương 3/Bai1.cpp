/*  Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím.*/
#include <iostream>
using namespace std;
int main() 
{
   float a, b;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    if (a == 0 && b == 0)
    {
        cout << " Phuong trinh vo so nghiem." << endl;
    } 
    else if ( a == 0 && b != 0)
    {
        cout << " Phuong trinh vo nghiem." << endl;
    }
    else if ( a != 0)
    {
        cout << " Phuong trinh co nghiem x = " << -b / a << endl;
    }

    return 0;
}