/*Viết chương trình nhập vào 1 số nguyên dương n. Kiểm tra xem số n có phải là số nguyên tố hay không   */
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void intput_intger(string laber,int &n);
bool is_prime(int n);

int main()
{
    int n;
    intput_intger(" Nhap So Nguyen Duong n: ",n);
    if(is_prime(n))
    {
        cout << n << " La so nguyen to.";
    }
    else
    {
        cout << n << " Khong phai la so nguyen to.";
    }
    
    return 0;
}

void intput_intger(string laber,int &n)
{
    cout << laber;
    cin >> n;
}
bool is_prime(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    if (n < 2)
    {
        return false;
    }
    return true;
}