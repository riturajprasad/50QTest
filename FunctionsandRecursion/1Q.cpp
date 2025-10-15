// Write a recursive function to find the factorial of a number.

#include <iostream>
using namespace std;

long long factorial_value(int x)
{
    if (x < 0)
        return 0;
    else if (x == 0)
        return 1;
    return x * factorial_value(x - 1);
}

int main()
{
    int x;
    cout << "Enter your number to get its factorial value: ";
    if (cin >> x)
    {
        long long fac = factorial_value(x);
        if (fac == 0)
            cout << "factorial of nagative number is not possible" << endl;
        else
            cout << "Factorial of " << x << " = " << fac << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}