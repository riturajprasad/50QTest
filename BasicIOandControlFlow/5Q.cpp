// Print the multiplication table of a given number.

#include <iostream>
using namespace std;

void Multiplication_Table(int x)
{
    for (int i = 0; i < 10; i++)
    {
        cout << x << " x " << i + 1 << " = " << (x * (i + 1)) << endl;
    }
}

int main()
{
    int x;
    cout << "Enter your number to create multiplication table: ";
    if (cin >> x)
    {
        Multiplication_Table(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}