#include <iostream>
using namespace std;

int main()
{
    // Question => Write a program that takes an integer input from the user and checks if it is positive, negative, or zero. Print the result accordingly.
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0)
    {
        cout << "The number is positive." << endl;
    }
    else if (number < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }

    return 0;
}