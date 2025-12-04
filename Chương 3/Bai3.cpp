/*  Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
*/
#include <iostream>
using namespace std;
int main()
{
    float deg_f;
    cout << " F = ";
    cin >> deg_f;
    cout << " C = " << (deg_f -32) / 1.8 << endl;
    return 0;
}