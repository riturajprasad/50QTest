// Swap two numbers using pointers.

#include <iostream>
using namespace std;

void mySwap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;
    cout<<"Enter two number: ";
    if(cin>>x>>y)
    {
        cout<<"Before X: "<<x<<endl;
        cout<<"Before Y: "<<y<<endl<<endl;
        mySwap(&x, &y);
        cout<<"After X: "<<x<<endl;
        cout<<"After Y: "<<y<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
        return 1;
    }
    return 0;
}