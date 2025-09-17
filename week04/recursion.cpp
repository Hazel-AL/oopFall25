#include <iostream>
#include <string>
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

void sort(string& s, int high)
{
    if (high > 0)
    {
        int indexMax = 0;
        char max = s[0];
        for (int i = 1; i <= high; i++)
        {
            if (s[i] > max)
            {
                max = s[i];
                indexMax = i;
            }
        }
        s[indexMax] = s[high];
        s[high] = max;
        sort(s, high - 1);
    }
}

void sort(string& s)
{
    sort(s, s.size() - 1);
}

int main()
{
    unsigned int n = 0;
    string in;
    /*cout << "enter a number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << factLoop(n) << endl;*/
    cout << "Enter a word: ";
    getline(cin, in, '\n');
    cout << in << " sorted alphabetically is ";
    sort(in);
    cout << in << "." << endl;
}