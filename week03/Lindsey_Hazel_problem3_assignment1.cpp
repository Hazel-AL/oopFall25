#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter an integer to see if it is divisble by 4 or not: ";
    cin >> input;

    if (input < 0)
    {
        cout << "This program does not accept negative numbers." << endl;
    }
    else if (input > 100)
    {
        float root = sqrt(input);
        cout << "The entered number is greater than 100 and its square root is " << root << endl;
    } else
    {
        int quotient = input / 4;
        int remainder = input % 4;
        if (remainder == 0)
        {
            cout << "The given number (" << input << ") is divisible by 4." << endl;
        }
        else
        {
            cout << "The given number (" << input << ") is not divisible by 4." << endl;
        }
        cout << "Quotient: " << quotient << " and Remainder: " << remainder << endl;
    }

    return 0;
}