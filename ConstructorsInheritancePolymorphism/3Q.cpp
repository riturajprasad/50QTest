// Demonstrate function overloading by creating multiple add() functions.

#include <iostream>
using namespace std;

class ADD
{
public:
    ADD() {}
    ~ADD() {}

    int add(int x, int y)
    {
        return x + y;
    }
    double add(double x, double y, double z)
    {
        return x + y + z;
    }
    int add(int x, int y, int z)
    {
        return x + y + z;
    }
    double add(double x, double y)
    {
        return x + y;
    }
};

int main()
{
    ADD a;
    cout << a.add(3, 5) << endl;
    cout << a.add(3.1, 5.3) << endl;
    cout << a.add(3.1, 5.3, 2.2) << endl;
    cout << a.add(3, 5, 2) << endl;
    return 0;
}