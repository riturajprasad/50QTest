// Display all factors of a number.

#include <iostream>
using namespace std;

void all_factor(int a)
{
    if(a == 0)
    {
        cout<<"Please enter Non-Zero value"<<endl;
        return;
    }
    else if(a > 0)
    {
        int f = a;
        cout<<f<<" ";
        f--;
        if(f == 1) cout<<f;
        while(f > 1)
        {
            f--;
            if(a%f == 0)
            {
                cout<<f<<" ";
            }
        }
    }
    else
    {
        int f = a;
        cout<<f<<" ";
        f++;
        if(f == -1) cout<<f;
        while(f < -1)
        {
            f++;
            if(a%f == 0)
            {
                cout<<f<<" ";
            }
        }
    }
}

int main()
{
    int x;
    cout << "Enter your number to display all factors: ";
    if (cin >> x)
    {
        all_factor(x);
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}