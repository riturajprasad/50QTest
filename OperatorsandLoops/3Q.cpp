// Find the least common multiple (LCM) of two numbers.

#include <iostream>
using namespace std;

int GCD(int x, int y)
{
    if (x <= 0 || y <= 0)
        return 0;
    int d;
    if (x < y)
    {
        if (y % x == 0)
            d = x;
        else
        {
            int r = x, div = y;
            while (div % r != 0)
            {
                int temp = r;
                r = div % r;
                div = temp;
            }
            d = r;
        }
    }
    else
    {
        if (x % y == 0)
            d = y;
        else
        {
            int r = y, div = x;
            while (div % r != 0)
            {
                int temp = r;
                r = div % r;
                div = temp;
            }
            d = r;
        }
    }
    return d;
}

int main()
{
    int x, y;
    cout << "Enter two number to Find LCM: ";
    if (cin >> x >> y)
    {
        if (GCD(x, y) == 0)
            cout << "Please enterd positive number." << endl;
        else
            cout << "LCM of both number = " << (x*y)/GCD(x, y);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}