#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input, '\n');

    for (int i = 1; i < input.length(); i+=2)
    {
        cout << input[i];
    }
    cout << endl;
    
    return 0;
}