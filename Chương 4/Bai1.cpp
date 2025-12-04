/*Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.*/
#include <iostream>
using namespace std;
int main()
{
    int n, arr[10];
    cout <<" n = ";
    cin >> n;

    cout <<" Nhap mang: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    cout <<" Mang sau khi sap xep: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}