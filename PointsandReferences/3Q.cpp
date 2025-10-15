// Copy one string into another using pointers.

#include <iostream>
#include <string>
using namespace std;

string string_copy(string *x)
{
    string s;
    int i = 0;
    while((*x)[i])
    {
        s.push_back((*x)[i]);
        i++;
    }
    return s;
}

int main()
{
    string x;
    cout<<"Enter any string to know its length: ";
    cin>>x;
    cout<<"Your copy string = "<<string_copy(&x);
    return 0;
}