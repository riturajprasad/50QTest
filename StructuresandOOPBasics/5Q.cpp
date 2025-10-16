// Create a class Bank Account with deposit and withdraw functions.

#include <iostream>
using namespace std;

class Bank
{
private:
    double amount = 0;

public:
    Bank() {}
    ~Bank() {}

    void deposit()
    {
        double amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        if (amt < 0)
            cout << "Amount never be negative." << endl;
        else
        {
            amount += amt;
            cout << "Deposit successfully!" << endl;
        }
    }

    void withdraw()
    {
        double amt;
        cout << "Your current Amount: " << amount << endl;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if (amt < 0)
            cout << "Amount never be negative." << endl;
        else if ((amount - amt) < 0)
            cout << "You enterd more then your current Amount." << endl;
        else
        {
            amount -= amt;
            cout << "Withdraw successfully!" << endl;
        }
    }
};

int main()
{
    Bank b;
    while (true)
    {
        int choice;
        cout << "--------------Bank--------------" << endl;
        cout << "\t1. Deposit" << endl;
        cout << "\t2. Withdraw" << endl;
        cout << "---------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
            b.deposit();
        else if (choice == 2)
            b.withdraw();
        else
        {
            cout << "Please enter right choice" << endl;
            break;
        }
    }
    return 0;
}