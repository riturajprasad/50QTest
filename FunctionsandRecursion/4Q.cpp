// Write a recursive function to compute power(a, b).

#include <iostream>
using namespace std;

double Power(double x, int y)
{
    if(y==0) return 1;
    return x * Power(x, y-1);
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