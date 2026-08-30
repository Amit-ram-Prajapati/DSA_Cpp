#include <iostream>
using namespace std;

int factorialCalulaor(int num)
{

    int fact = 1;
    if (num == 0 || num == 1)
    {
        cout << "Factorial is :  1" << "\n";
        return 0;
    }
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int n;
    cout << "Enter a number to calculate its factorial :";
    cin >> n;
    int res = factorialCalulaor(n);
    cout << "Factorial of " << n << " is " << res;
    return 0;
}