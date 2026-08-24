#include <iostream>
using namespace std;

int main()
{
    // Reverse a Number

    int number = 2359876;
    int temp = number;
    int rev = 0;
    while (number != 0)
    {
        int digit = number % 10;
        rev = rev * 10 + digit;
        number = number / 10;
    }

    cout << "The reverse of a " << temp << " is : " << rev;

    return 0;
}