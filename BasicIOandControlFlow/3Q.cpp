// Check whether a number is even or odd.

#include <iostream>
using namespace std;

int Check_Even(int x)
{
    if (x == 0)
        return 0;
    if (x % 2 == 0)
        return 2;
    else
        return 1;
}

int main()
{
    int x;
    cout << "Enter your number to check even or odd: ";
    if (cin >> x)
    {
        if (Check_Even(x) == 2)
            cout << "You enterd Even number" << endl;
        else if (Check_Even(x) == 1)
            cout << "You enterd Odd number" << endl;
        else
            cout << "0 is nither even nor odd" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}