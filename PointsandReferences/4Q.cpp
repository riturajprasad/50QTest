// Access array elements using pointer arithmetic.

#include <iostream>
#include <vector>
using namespace std;

void Array_ptr_print(vector<int> *x)
{
    int *ptr = &((*x)[0]);
    for(int i=0; i<x->size(); i++)
    {
        cout<<*(ptr + i)<<" ";
    }
}

int main()
{
    vector<int> x = {5, 8, 3, 9};
    Array_ptr_print(&x);
    return 0;
}