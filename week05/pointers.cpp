#include <iostream>
using namespace std;

void swapValue(int n1, int n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapReference(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapPointer(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int in1, in2, in3, in4;
    cout << "Enter a number: ";
    cin >> in1;
    cout << "enter another number: ";
    cin >> in2;
    cout << "enter another number: ";
    cin >> in3;
    cout << "enter another number: ";
    cin >> in4;

    swapValue(in1, in2);

    cout << "The first and second numbers swapped by value in a function are " << in1 << " and " << in2 << endl;
    swapReference(in1, in2);
    cout << "The first and second numbers swapped by reference are " << in1 << " and " << in2 << endl;
    swapPointer(&in3, &in4);
    cout << "The third and fourth numbers swapped by pointer are " << in3 << " and " << in4 << endl;
    return 0;
}