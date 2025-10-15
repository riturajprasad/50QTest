// Find the length of a string using pointers.

#include <iostream>
#include <string>
using namespace std;

int string_len(string *x)
{
    int i = 0;
    while((*x)[i])
    {
        i++;
    }
    return i;
}

int main()
{
    string x;
    cout<<"Enter any string to know its length: ";
    cin>>x;
    cout<<"Length of you string = "<<string_len(&x);
    return 0;
}