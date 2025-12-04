#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void input_integer(string label, int &n);
bool is_prime(int n);
int sum_of_primes(int n);

int main()
{
    int n;
    input_integer("Nhap so nguyen duong n: ", n);
    cout << "Ket qua: " << sum_of_primes(n);
    return 0;
}

void input_integer(string label, int &n)
{
    cout << label;
    cin >> n;
}

bool is_prime(int n)
{
    if (n < 2) return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sum_of_primes(int n)
{
    int result = 0;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            result += i;
        }
    }

    return result;
}
