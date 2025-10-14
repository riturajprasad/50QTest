// Read three numbers and print the largest.

#include <iostream>
using namespace std;

int Largest(int x, int y, int z)
{
    int m = x;
    if(y>m) m = y;
    if(z>m) m = z;
    return m;
}

int main()
{
    int x, y, z;
    cout << "Enter three number: ";
    if (cin >> x >> y >> z)
        cout << "Largest = " << Largest(x, y, z);
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}