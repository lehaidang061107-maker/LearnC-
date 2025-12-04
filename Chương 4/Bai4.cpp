/*Viết chương trình nhập vào 1 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra màn hình tổng của các số lẻ xuất hiện trong ma trận.
*/
#include <iostream>
using namespace std;
int main()
{
    int n, m, arr[10][10];
    cout <<" n = ";;
    cin >> n;
    cout <<" m = ";;
    cin >> m;

    cout <<" Nhap ma tran: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] % 2 == 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout <<" Tong cac so le trong ma tran: " << sum;    
    return 0;
}