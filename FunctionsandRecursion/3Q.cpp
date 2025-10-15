// Write a recursive function to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int Sum_ofDigit(int x)
{
    if (x == 0)
        return 0;
    return x%10 + Sum_ofDigit(x/10);
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