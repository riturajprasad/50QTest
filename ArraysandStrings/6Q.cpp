// Sort an array using the bubble sort algorithm.

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

int main()
{
    vector<int> arr = {9, 4, 9, 8, 6};
    Bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}