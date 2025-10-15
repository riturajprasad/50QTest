// Search for an element in an array using linear search.

#include <iostream>
#include <vector>
using namespace std;

bool Search_element(vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}

int main()
{
    vector<int> arr = {9, 4, 9, 8, 6};
    int x;
    cout << "Enter your number to Search in Array: ";
    if (cin >> x)
    {
        if (Search_element(arr, x))
            cout << x << " present in Array: " << endl;
        else
            cout << x << " Not present in Array" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}