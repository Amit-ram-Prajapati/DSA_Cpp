#include <iostream>
using namespace std;

int main()
{
    // print the sum of a digit

    int number = 2359;
    int temp = number;
    int sum = 0;
    while (number != 0)
    {
        int digit = number % 10;
        sum += digit;
        number = number / 10;
    }
    cout << "Sum of digits of a number " << temp << " is : " << sum << "\n";

    // print the sum of a odd digit
    int oddSum = 0;
    int temp1 = temp;
    while (temp != 0)
    {
        int digit = temp % 10;
        if (digit % 2 != 0)
        {
            oddSum += digit;
        }
        temp = temp / 10;
    }
    cout << "Sum of odd digits of a number " << temp1 << " is : " << oddSum << "\n";

    return 0;
}