#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;
    if (num == 1 || num == 2)
    {
        cout << num << " is a prime number." << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}