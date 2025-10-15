// Count the number of even and odd elements in an array.

#include <iostream>
#include <vector>
using namespace std;

int Count_even(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    vector<int> arr = {9, 4, 9, 8, 6};
    int e = Count_even(arr);
    int o = arr.size() - e;
    cout << "Number of Even in Array: " << e << endl;
    cout << "Number of Odd in Array: " << o << endl;
    return 0;
}