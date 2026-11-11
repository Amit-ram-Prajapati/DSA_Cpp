// Encapsulation means combining data and the functions that operate on that data inside a class, while controlling how that data can be accessed.

// Encapsulation is not simply making every variable private. It is about designing a class so that its data remains valid and its internal details are protected.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance = 1000;

public:
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid deposit\n";
        }
    }

    void showBalance()
    {
        cout << "Balance: " << balance << "\n";
    }
};

int main()
{
    BankAccount account;

    account.deposit(500);
    account.showBalance();

    account.deposit(-200);
    account.showBalance();

    return 0;
}