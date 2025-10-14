// Read two integers and print their sum.

#include <iostream>
using namespace std;

int Sum(int x, int y)
{
    return (x + y);
}

int main()
{
    int x, y;
    cout << "Enter two number: ";
    if (cin >> x >> y)
        cout << "Sum = " << Sum(x, y);
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}