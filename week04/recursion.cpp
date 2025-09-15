#include <iostream>
using namespace std;

unsigned int fact(unsigned int n)
{

    if (n > 0)
    {
        return n * fact(n-1);
    } else
    {
        return 1;
    }
}

unsigned int factLoop(unsigned int n)
{
    unsigned int out = 1;
    if (n == 0)
    {
        return 1;
    } else
    {
        for (int i = 1; i <= n; i++)
        {
            out *= i;
        }
        return out;
    }
}

int main()
{
    unsigned int n = 0;
    cout << "enter a number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << factLoop(n) << endl;
    return 0;
}