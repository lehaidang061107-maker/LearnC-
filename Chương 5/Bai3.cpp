/*Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng. Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout <<" Nhap Chuoi: ";
    getline(cin,str);

    for(int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    
    if (str[0] != ' ')
    {
        str[0] = toupper(str[0]);
    }
    
    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    cout <<" Ket Qua: " << str;
    return 0;
}