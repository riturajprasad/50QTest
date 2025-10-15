// Write a recursive function to find the nth Fibonacci number.

#include <iostream>
using namespace std;

int Fibonacci(int x)
{
    if (x <= 0)
        return 0;
    else if (x == 1 || x == 2)
        return 1;
    return Fibonacci(x - 2) + Fibonacci(x - 1);
}

int main()
{
    int x;
    cout << "Enter your number to get nth Fibonacci number: ";
    if (cin >> x)
    {
        int f = Fibonacci(x);
        if (f == 0)
            cout << "Please Enter positive number" << endl;
        else
            cout << "nth Fibonacci number = " << f << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}