#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int getDigit(int n);
string swapCase(const string& n);

int main()

{
    /*
    int in = 0;
    cout << "Enter an integer: ";
    cin >> in;
    int out = getDigit(in);
    cout << in << " has " << out << " digit(s)." << endl;
    */

    string str;
    cout << "Enter a string: ";
    getline(cin, str, '\n');
    string strOut = swapCase(str);
    cout << "The string with reversed capitalization is " << strOut <<".\n";
    
    return 0;
}

int getDigit(int n)
{
    int i = 0; 
    while (n != 0)
    {
        i++;
        n /= 10;
    }
    return i;
}

string swapCase(const string& n)
{
    string newString = "";
    for (int i = 0;  i <= n.length(); i++)
    {
        if (islower(n[i]))
        {
            newString += toupper(n[i]);
        } else if (isupper(n[i]))
        {
            newString += tolower(n[i]);
        } else
        {
            newString += n[i];
        }
    }
    return newString;
}