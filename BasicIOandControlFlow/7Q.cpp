// Print the first N Fibonacci numbers.

#include <iostream>
using namespace std;

void N_Fibonacci(int x)
{
    if (x <= 0)
    {
        cout << "You enterd 0 or negative number" << endl;
        return;
    }
    else
    {
        cout << x << " Fibonacci numbers: ";
        long long a = 1, b = 0;
        for (int i = 0; i < x; i++)
        {
            cout << a << " ";
            int temp = a;
            a += b;
            b = temp;
        }
    }
}

int main()
{
    int x;
    cout << "Enter your number to get its factorial value: ";
    if (cin >> x)
    {
        N_Fibonacci(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}