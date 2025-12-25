#include <iostream>
using namespace std;

class Calculator
{
    public: 
    int add(int a, int b)
    {
        cout << "Integer" << endl;
        return a + b;
    }

    float add(float a, float b)
    {
        cout << "Float" << endl;
        return a + b;
    }
};
int main()
{
    Calculator calc;

    int a = 1, b = 2;
    float c = 1.4, d = 1.5;

    cout << " a + b = " << calc.add(a, b) << endl;
    cout << " c + d = " << calc.add(c, d) << endl;


    return 0;
}