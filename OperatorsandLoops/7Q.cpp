// Convert Celsius temperature to Fahrenheit. 

#include <iostream>
using namespace std;

double to_Fahrenheit(double c)
{
    return ((c*1.8)+32);
}

int main()
{
    double c;
    cout << "Enter your number to Convert Celsius temperature to Fahrenheit: ";
    if (cin >> c)
    {
        double f = to_Fahrenheit(c);
        cout<<"Fahrenheit temperature = "<<f<<endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}