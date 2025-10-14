// Compute the sum of digits of a number.

#include <iostream>
using namespace std;

int Sum_ofDigit(int x)
{
    if (x == 0)
        return 0;
    else if (x > 0)
    {
        int SofDigit = 0;
        for (int i = x; i > 0; i = i / 10)
        {
            int d = i % 10;
            SofDigit += d;
        }
        return SofDigit;
    }
    else
    {
        int SofDigit = 0;
        for (int i = x; i < 0; i = i / 10)
        {
            int d = i % 10;
            SofDigit += d;
        }
        return SofDigit;
    }
}

int main()
{
    int x;
    cout << "Enter your number to Sum of Digit: ";
    if (cin >> x)
    {
        cout << "Sum of Digit of " << x << " = " << Sum_ofDigit(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}