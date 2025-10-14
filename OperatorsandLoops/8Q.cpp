// Compute the power of a number without using built-in functions. 

#include <iostream>
using namespace std;

double Power(double x, int y)
{
    double p = 1;
    for(int i=1; i<=y; i++)
    {
        p *= x;
    }
    return p;
}

int main()
{
    double x;
    int y;
    cout << "Enter x and y to find x^y: ";
    if (cin >> x>> y)
    {
        double p = Power(x, y);
        cout<<"x^y = "<<p<<endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}