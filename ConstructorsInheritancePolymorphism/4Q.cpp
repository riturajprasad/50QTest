// Demonstrate operator overloading for + in a Complex class.

#include <iostream>
using namespace std;

class Complex
{
private:
    double x;
    double y;

public:
    Complex(double x, double y) : x(x), y(y) {}
    ~Complex() {}

    void display_Complex()
    {
        cout << x << " + (" << y << "i)" << endl;
    }

    Complex operator+(const Complex &cx)
    {
        return Complex(x + cx.x, y + cx.y);
    }
};

int main()
{
    Complex cx1(2, 3), cx2(1, 2);
    cx1.display_Complex();
    cx2.display_Complex();
    Complex cx = cx1 + cx2;
    cx.display_Complex();
    return 0;
}