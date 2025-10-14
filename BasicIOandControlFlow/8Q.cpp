// Reverse a given number.

#include <iostream>
using namespace std;

int Reverse(int x)
{
    int rev = 0;
    for (int i = x; i > 0; i = i / 10)
    {
        int d = i % 10;
        rev = rev * 10 + d;
    }
    return rev;
}

int main()
{
    int x;
    cout << "Enter your number to Reverse: ";
    if (cin >> x)
    {
        cout << "Reverse of " << x << " = " << Reverse(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}