// Reverse an array in place.

#include <iostream>
#include <vector>
using namespace std;

void Reverse_Array(vector<int> &arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size() - (i + 1)];
        arr[arr.size() - (i + 1)] = temp;
    }
}

int main()
{
    vector<int> arr = {9, 4, 9, 8, 6};
    Reverse_Array(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}