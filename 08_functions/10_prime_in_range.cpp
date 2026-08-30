#include <iostream>
#include <cmath>
using namespace std;

int checkPrime(int num)
{
    bool isPrime = true;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{

    int num;
    cout << "Enter a range end : ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if (checkPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}