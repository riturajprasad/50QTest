// Create a class Complex with a constructor and function to add two complex numbers.

#include <iostream>
using namespace std;

class Complex
{
public:
    double x;
    double y;

public:
    Complex(double x, double y) : x(x), y(y) {}
    ~Complex() {}

    void display_Complex()
    {
        cout << x << " + (" << y << "i)" << endl;
    }
};

class Cal_Complex
{
private:
    Complex cx1;
    Complex cx2;

public:
    Cal_Complex(Complex cx1, Complex cx2) : cx1(cx1), cx2(cx2) {}
    ~Cal_Complex() {}

    Complex add_Complex()
    {
        double x = cx1.x + cx2.x;
        double y = cx1.y + cx2.y;
        Complex cx(x, y);
        return cx;
    }
};

int main()
{
    double x1, y1, x2, y2;
    cout << "Enter x of 1st Complex No: ";
    cin >> x1;
    cout << "Enter y of 1st Complex No: ";
    cin >> y1;
    cout << "Enter x of 2nd Complex No: ";
    cin >> x2;
    cout << "Enter y of 2nd Complex No: ";
    cin >> y2;
    Complex cx1(x1, y1);
    Complex cx2(x2, y2);

    Cal_Complex cal_cx(cx1, cx2);
    cout << "\n1st Complex No: ";
    cx1.display_Complex();
    cout << "2nd Complex No: ";
    cx2.display_Complex();
    cout << "Sum of both Compex No: ";
    Complex cx = cal_cx.add_Complex();
    cx.display_Complex();
    return 0;
}