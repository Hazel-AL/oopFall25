#include <iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter an integer between 0 and 1000000: ";
    cin >> input;

    if (input > 1000000 || input < 0)
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        int lastNum = 0;
        int finalValue = 0;
        int bonusValue = 0;
        do
        {
            while (input > 10)
            {
                lastNum = input % 10;
                input /= 10;
                finalValue += lastNum;
            }
            finalValue += input;
            cout << "The sum of the digits is " << finalValue << ".\n";

            lastNum = finalValue % 10;
            finalValue /= 10;
            bonusValue += lastNum;

        } while (finalValue > 10);
        bonusValue += finalValue;
        cout << "The bonus sum of the digits is " << bonusValue << ".\n";
    }
    return 0;
}