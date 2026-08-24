#include <iostream>
using namespace std;

int main()
{
    float income = 200000;
    float tax;
    if (income >= 500000 && income <= 1000000)
    {
        tax = (income * 20) / 100;
        cout << "You have to pay total Tax :" << tax;
    }
    else if (income > 1000000)
    {
        tax = (income * 30) / 100;
        cout << "You have to pay total Tax :" << tax;
    }
    else
    {
        cout << "No Tax to apply.";
    }

    return 0;
}