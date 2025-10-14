// Check if a number is a palindrome.

#include <iostream>
using namespace std;

bool is_palindrome(int x)
{
    int rev = 0;
    for (int i = x; i > 0; i = i / 10)
    {
        int d = i % 10;
        rev = rev * 10 + d;
    }
    return (rev == x);
}

int main()
{
    int x;
    cout << "Enter your number to check palindrome: ";
    if (cin >> x)
    {
        if (is_palindrome(x))
            cout << "You enterd palindrome number.";
        else
            cout << "You enterd Non-palindrome number.";
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}