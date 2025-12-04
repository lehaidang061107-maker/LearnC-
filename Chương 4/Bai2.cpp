/*Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên và nhập số nguyên k. Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không, nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).*/
#include <iostream>
using namespace std;
int main()
{
    int n, arr[10], k;
    cout <<" n = ";;
    cin >> n;

    cout <<" Nhap mang: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<" k = ";
    cin >> k;

    int x = -1,y = -1;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j && arr[i] + arr[j] == k)
            {
                x = i;
                y = j;
                break;
            }

        }
        if(x != - 1 && y != -1)
        {
            break;
        }
    }
    if( x != -1 && y != -1)
    {
        cout <<" Ket qua " << x << " " << y;
    }
    else
    {
        cout <<" Khong co ket qua ";
    }
    return 0;
}