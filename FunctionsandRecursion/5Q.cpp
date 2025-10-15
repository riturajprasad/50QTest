// Write a function to check if a string is a palindrome.

#include <iostream>
#include <string>
using namespace std;

// bool is_palindrome(string x)
// {
//     int s = x.size()/2;
//     for(int i=0; i<s; i++)
//     {
//         if(x[i] != x[x.size() - (i+1)])
//             return false;
//     }
//     return true;
// }

bool is_palindrome(string x, int s, int e)
{
    if(s>=e) return true;
    if(x[s] != x[e]) return false;
    return is_palindrome(x, s+1, e-1);
}

int main()
{
    string x;
    cout << "Enter any string to check palindrome: ";
    cin >> x;
    if (is_palindrome(x, 0, x.size()-1))
        cout << "You enterd palindrome string.";
    else
        cout << "You enterd Non-palindrome string.";
    return 0;
}