// Implement a base class Shape and derived classes Circle and Rectangle to compute areas.

#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
    string name;

public:
    Shape(string n) : name(n) {}
    ~Shape() {}
    string getname()
    {
        return name;
    }
    virtual double area() const = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}
    ~Circle() {}
    double area() const override
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) : Shape("Rectangle"), length(l), breadth(b) {}
    ~Rectangle() {}
    double area() const override
    {
        return length * breadth;
    }
};

int main()
{
    int choice;
    cout << "--------------Shape--------------" << endl;
    cout << "\t1. Circle" << endl;
    cout << "\t2. Rectangle" << endl;
    cout << "---------------------------------" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        double r;
        cout << "Enter Circle radius: ";
        cin >> r;
        Shape *s1 = new Circle(r);
        cout << "Area of " << s1->getname() << " = " << s1->area();
    }
    else if (choice == 2)
    {
        double l, b;
        cout << "Enter length of Rectangle: ";
        cin >> l;
        cout << "Enter breadth of Rectangle: ";
        cin >> b;
        Shape *s2 = new Rectangle(l, b);
        cout << "Area of " << s2->getname() << " = " << s2->area();
    }
    else
        cout << "Please enter right choice" << endl;
    return 0;
}