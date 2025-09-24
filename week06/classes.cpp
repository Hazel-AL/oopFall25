#include <iostream>
using namespace std;

class Circle
{
public:
    // define variables within the class (access using Circle.radius)
    double radius;

    // constructors -> used to build the class when called to create one
    Circle()
    {
        radius = 1;
    }

    // can overload constructors to have more than one arguments
    Circle(double newRadius)
    {
        radius = newRadius;
    }

    // functions as part of the class (access using Circle.getArea())
    double getArea()
    {
        return radius * radius * 3.1415;
    }
};

int main()
{
    // define a Circle class
    Circle c1(5);
    Circle c2;

    cout << "The area for circle 1 is " << c1.getArea() << endl;
    double x = c2.getArea();

    return 0;
}
