// Find the second largest number in an array.

#include <iostream>
#include <vector>
using namespace std;

void Bubble_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 1; j < (arr.size() - i); j++)
        {
            int temp = arr[j];
            if (arr[j - 1] > arr[j])
            {
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

vector<int> Remove_duplicate(vector<int> &arr)
{
    Bubble_sort(arr);
    vector<int> arr2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[i + 1])
            arr2.push_back(arr[i]);
    }
    return arr2;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 9, 9, 9};
    vector<int> arr2 = Remove_duplicate(arr);
    cout << "2nd largest element = " << arr2[arr2.size() - 2];
    return 0;
}