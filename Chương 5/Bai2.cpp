/*Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.*/
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << " Nhap Chuoi: ";
    getline(cin,str);
    int i = 0;
    while( i < str.length()-1)
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            str.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    cout <<" Ket qua: " << str;
    return 0;
}