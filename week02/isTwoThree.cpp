#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "enter a number: ";
    cin >> num;

    if ((num % 2 == 0) && (num % 3 == 0))
    {
        cout << "The number is divisible by two and three." << endl;
    }
    if ((num % 2 == 0) || (num % 3 == 0))
    {
        cout << "The number is divisible by two or three." << endl;
        if ((num % 2 != 0) || (num % 3 != 0))
        {
            cout << "The number is divisble by two or three but not both." << endl;
        }
    }

    return 0;
}