#include <iostream>
using namespace std;

int main()
{
    // Print the largest of two numbers
    int num1 = 10;
    int num2 = 20;

    if (num1 > num2)
    {
        cout << num1 << " Is largest." << "\n";
    }
    else
    {
        cout << num2 << " Is largest." << "\n";
    }

    // Print if a number is even or odd
    int number = 8;
    if (number % 2 == 0)
    {
        cout << "Number is even : " << number;
    }
    else
    {
        cout << "Number is odd : " << number;
    }
    return 0;
}