#include <iostream>
using namespace std;

class clsBankAccount
{
private:
    int _balance;

protected:
    int _accountNumber;

public:
    clsBankAccount()
    {
        _balance = 1000;
        _accountNumber = 12345;
    }

    // Friend class: Like a bribe, it gets access to everything.
    // This will grant full access to class B
    friend class clsBankManager; // friend class
};

class clsBankManager
{
public:
    void display(clsBankAccount Account)
    {
        cout << "Balance = " << Account._balance << endl;
        cout << "Account Number = " << Account._accountNumber << endl;
    }
};

int main()
{
    clsBankAccount Account;
    clsBankManager Manager;

    Manager.display(Account);

    return 0;
}