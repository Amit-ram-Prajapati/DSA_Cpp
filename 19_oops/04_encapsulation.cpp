#include <iostream>
#include <iomanip> // to 20000000 this from 2e+008 this
using namespace std;

// Encapsultion is the buliding of data and the methods that operates on that data into a single unit that is a class.

class BankAccount
{
    // data hiding
    double balance = 0.0;

public:
    void deposite(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount c1;
    // c1.balance; // not allowed
    c1.deposite(200000000);
    cout << fixed << setprecision(2) << c1.getBalance();

    return 0;
}