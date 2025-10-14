// Check if a given number is prime.

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

int main()
{
    int x;
    cout << "Enter your number to check Prime No: ";
    if (cin >> x)
    {
        if(x <=1 )
            cout<<"Please enter greater then 1"<<endl;
        else if(is_Prime(x))
            cout<<"You enterd Prime No"<<endl;
        else
            cout<<"You enterd Non-Prime No"<<endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}