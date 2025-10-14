// Compute the sum of all even numbers from 1 to N. 

#include <iostream>
using namespace std;

int Sumof_Even(int x)
{
    if (x <= 1)
    {
        cout<<"Please enter greater then 1"<<endl;
        return 0;
    }
    else
    {
        int s = 0;
        int t = x;
        while(t>0)
        {
            if(t%2 != 0) t--;
            s += t;
            t -= 2;
        }
        return s;
    }
}

int main()
{
    int x;
    cout << "Enter your number to Sum even from 1 to N: ";
    if (cin >> x)
    {
        if(Sumof_Even(x) > 1)
            cout<<"Sum of even from 1 to "<<x<<" = "<<Sumof_Even(x)<<endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}