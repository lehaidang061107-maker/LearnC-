
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string address;
};
int main() {
    Person person1;
    
    cout << "Nhap Ten: ";
    getline(cin, person1.name);
    
    cout << "Nhap Tuoi: ";
    cin >> person1.age;
    cin.ignore();
    
    cout <<"Nhap Dia Chi: ";
    getline(cin, person1.address);
    
    cout <<"Name: " << person1.name << endl;
    cout <<"Age: " << person1.age << endl;
    cout <<"Address " << person1.address << endl;
    
    return 0;
}