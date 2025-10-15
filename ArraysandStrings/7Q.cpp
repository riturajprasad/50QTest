// Merge two arrays into a single sorted array.

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

vector<int> Merge_sort(vector<int> &arr1, vector<int> &arr2)
{
    Bubble_sort(arr1);
    Bubble_sort(arr2);
    vector<int> arr;
    int s = arr1.size() + arr2.size();
    int s1 = 0, s2 = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr1[s1] <= arr2[s2])
        {
            if (s1 > (arr1.size() - 1))
                continue;
            arr.push_back(arr1[s1]);
            s1++;
        }
        else if (arr1[s1] >= arr2[s2])
        {
            if (s2 > (arr2.size() - 1))
                continue;
            arr.push_back(arr2[s2]);
            s2++;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr1 = {0, 2, 1, 1, 9};
    vector<int> arr2 = {9, 8, 6};
    vector<int> arr = Merge_sort(arr1, arr2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}