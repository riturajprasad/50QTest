// Implement a class Calculator with functions for addition, subtraction, multiplication, and division.

#include <iostream>
using namespace std;

class Calculator
{
private:
    double x;
    double y;

public:
    Calculator(double x, double y) : x(x), y(y) {}
    ~Calculator() {}
    double get_y()
    {
        return y;
    }
    double add()
    {
        return (x + y);
    }
    double sub()
    {
        return (x - y);
    }
    double mul()
    {
        return (x * y);
    }
    double div()
    {
        return (x / y);
    }
};

int main()
{
    double x, y;
    cout << "Enter two number to use Calculator: ";
    if (cin >> x >> y)
    {
        Calculator cal(x, y);
        int choice;
        cout << "--------------Calculator--------------" << endl;
        cout << "\t1. Addition" << endl;
        cout << "\t2. Subtraction" << endl;
        cout << "\t3. Multiplication" << endl;
        cout << "\t4. Division" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
            cout << "Addition = " << cal.add() << endl;
        else if (choice == 2)
            cout << "Subtraction = " << cal.sub() << endl;
        else if (choice == 3)
            cout << "Multiplication = " << cal.mul() << endl;
        else if (choice == 4)
        {
            if (cal.get_y() != 0)
                cout << "Division = " << cal.div() << endl;
            else
                cout << "Indeterminate value" << endl;
        }
        else
            cout << "Please enter right choice" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}