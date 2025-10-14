// Count the digits in a number.

#include <iostream>
using namespace std;

int No_ofDigit(int x)
{
    if (x == 0)
        return 1;
    else if (x > 0)
    {
        int count = 0;
        for (int i = x; i > 0; i = i / 10)
        {
            count++;
        }
        return count;
    }
    else
    {
        int count = 0;
        for (int i = x; i < 0; i = i / 10)
        {
            count++;
        }
        return count;
    }
}

int main()
{
    int x;
    cout << "Enter your number to No of Digit: ";
    if (cin >> x)
    {
        cout << "No of Digit of " << x << " = " << No_ofDigit(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}