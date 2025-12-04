/*Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.*/
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout <<" Nhap Chuoi: ";
    getline(cin,str);

    while(str[0] == ' ')
    {
        str.erase(0,1);
    }

    while(str[str.length() - 1] == ' ' )
    {
        str.erase(str.length() - 1,1);
    }
    cout <<" Ket Qua: " << str;

    return 0;
}