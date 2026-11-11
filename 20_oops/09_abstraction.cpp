// Abstraction means hiding unnecessary implementation details and showing only the essential features to the user.

// Important: private helps hide implementation details, but abstraction is the broader design idea of exposing a simple interface while hiding complexity.

// Remember this
// - What does the object do ? → Abstraction focuses on this.- How does the object do it internally ? → These implementation details can be hidden.
#include <iostream>
using namespace std;
class ATM
{
public:
    void withdrawMoney()
    {
        verifyPIN();
        processPayment();
    }

private:
    void verifyPIN()
    {
        cout << "PIN verified\n";
    }

    void processPayment()
    {
        cout << "Payment processed\n";
    }
};

int main()
{
    ATM user;
    user.withdrawMoney();

    return 0;
}