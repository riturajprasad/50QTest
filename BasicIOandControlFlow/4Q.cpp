// Determine if a year is a leap year.

#include <iostream>
using namespace std;

void Check_LeapYear(int x)
{
    if (x < 0)
        cout << "Years never be in negative number" << endl;
    else if (x % 4 == 0)
        cout << "You enterd Leap Year" << endl;
    else
        cout << "You enterd Non-Leap Year" << endl;
}

int main()
{
    int x;
    cout << "Enter your years to check leap or not: ";
    if (cin >> x)
    {
        Check_LeapYear(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}