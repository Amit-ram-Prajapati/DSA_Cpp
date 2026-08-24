#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number to calculate its factorial :";
    cin >> n;
    int fact = 1;
    if (n == 0 || n == 1)
    {
        cout << "Factorial is :  1" << "\n";
        return 0;
    }
    for (int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}