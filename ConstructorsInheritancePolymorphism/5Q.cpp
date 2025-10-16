// Implement a class with both parameterized and default constructors to initialize values.

#include <iostream>
using namespace std;

class ADD
{
private:
    int x;
    int y;

public:
    ADD(int x, int y) : x(x), y(y) {}
    ADD() {}
    ~ADD() {}

    int add(int x, int y)
    {
        return x + y;
    }
    int add()
    {
        return x + y;
    }
};

int main()
{
    ADD a1;
    cout << a1.add(3, 5) << endl;
    cout << a1.add() << endl; // This give garbage value.
    ADD a2(3, 8);
    cout << a2.add() << endl;
    cout << a2.add(3, 5) << endl;
    return 0;
}