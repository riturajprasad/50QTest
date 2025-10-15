// Find the largest element in an array.

#include <iostream>
#include <vector>
using namespace std;

int Largestin_Array(vector<int> &arr)
{
    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
    }
    return maxi;
}

int main()
{
    vector<int> arr = {9, 4, 9, 8, 1};
    cout << "Largest element in Array = " << Largestin_Array(arr);
    return 0;
}