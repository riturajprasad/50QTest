// Create a class Rectangle with functions to calculate area and perimeter.

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    double x;
    double y;
public:
    Point(double x, double y) : x(x), y(y) {}
    ~Point() {}
};

class Rectangle
{
private:
    Point A;
    Point C;
    Point B;
    Point D;
public:
    Rectangle(Point p1, Point p2) : A(p1), C(p2), B(p1.x, p2.y), D(p2.x, p1.y) {}
    ~Rectangle() {}
private:
    double breadth = sqrt(pow((C.x - B.x), 2) + pow((C.y - B.y), 2));
    double length = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));;
public:
    double area()
    {
        return (length * breadth);
    }
    double perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    double x1, y1, x2, y2;
    cout<<"Enter x of A in Rectangle(ABCD): ";
    cin>>x1;
    cout<<"Enter y of A in Rectangle(ABCD): ";
    cin>>y1;
    cout<<"Enter x of C in Rectangle(ABCD): ";
    cin>>x2;
    cout<<"Enter y of C in Rectangle(ABCD): ";
    cin>>y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Rectangle rec(p1, p2);
    cout<<"Area of Rectangle(ABCD) = "<<rec.area()<<endl;
    cout<<"Perimeter of Rectangle(ABCD) = "<<rec.perimeter()<<endl;
    return 0;
}