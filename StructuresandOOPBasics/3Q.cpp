// Create a class Circle that takes radius and returns area.

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double rad) : radius(rad) {}
    ~Circle() {}
    double area()
    {
        return (3.14 * radius * radius);
    }
};

int main()
{
    double radius;
    cout<<"Enetr radius of Circle: ";
    cin>>radius;
    Circle c(radius);
    cout<<"Area of Circle = "<<c.area()<<endl;
    return 0;
}