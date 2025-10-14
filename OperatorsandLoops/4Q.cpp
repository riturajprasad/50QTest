// Print all prime numbers between 1 and N.

#include <iostream>
using namespace std;

bool is_Prime(int a)
{
    int f = a;
    while(f > 2)
    {
        f--;
        if(a%f == 0)
        {
            return false;
        }
    }
    return true;
}

void N_Prime(int x)
{
    if (x <= 0)
    {
        cout << "You enterd 0 or negative number" << endl;
        return;
    }
    else
    {
        cout << x << " Prime numbers: ";
        long long a = 2;
        for (int i = 0; i < x; i++)
        {
            cout << a << " ";
            a++;
            while(is_Prime(a) != true)
            {
                a++;
            }
        }
    }
}

int main()
{
    int x;
    cout << "Enter your number to get N Prime No: ";
    if (cin >> x)
    {
        N_Prime(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}