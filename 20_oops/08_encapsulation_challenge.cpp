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
            cout << amount << " Deposited successfully!" << "\n";
        }
        else
        {
            cout << "Invalid deposit\n";
        }
    }

    void withdraw(double amnt)
    {
        if (amnt > 0 && balance >= amnt)
        {
            balance -= amnt;
            cout << amnt << " Withdraw successfully!" << "\n";
        }
        else
        {
            cout << "Not enough amount to withdraw!" << "\n";
        }
    }
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account;

    account.deposit(500);  // 1500
    account.withdraw(200); // 1300
    account.withdraw(2000);

    cout << account.getBalance() << "\n";
    return 0;
}
