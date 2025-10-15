// Compute the average of elements in an array.

#include <iostream>
#include <vector>
using namespace std;

double Averageof_Array(vector<int> &arr)
{
    double sum = 0.0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    double a = sum / arr.size();
    return a;
}

int main()
{
    vector<int> arr = {9, 4, 9, 8, 6};
    cout << "Average of element in Array = " << Averageof_Array(arr);
    return 0;
}