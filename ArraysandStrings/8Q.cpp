// Find the frequency of each element in an array.

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

vector<vector<int>> frequencyof_each(vector<int> &arr)
{
    vector<vector<int>> freq;
    vector<int> help;
    Bubble_sort(arr);
    vector<int> arr2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[i + 1])
            arr2.push_back(arr[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        int count = 0;
        help.push_back(arr2[i]);
        for (int j = 0; j < arr.size(); j++)
        {
            if (help[0] == arr[j])
                count++;
        }
        help.push_back(count);
        freq.push_back(help);
        help.clear();
    }
    return freq;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 9, 9, 9};
    vector<vector<int>> freq = frequencyof_each(arr);
    for (int i = 0; i < freq.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < freq[i].size(); j++)
        {
            cout << freq[i][j] << " ";
        }
        cout << "}\n";
    }
    return 0;
}