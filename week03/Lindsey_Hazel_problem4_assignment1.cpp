#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double side = 0;
    double pi = 3.1415;
    cout << "Enter a side: ";
    cin >> side;
    double area = (6 * side * side) / (4 * tan(pi/6));
    cout << fixed << setprecision(2) << "The area of the hexagon is " << area << endl;

    return 0;
}