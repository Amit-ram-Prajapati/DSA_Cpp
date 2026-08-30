#include <iostream>
using namespace std;

int fact(int n)
{
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
    return fact;
}
int binoCoffe(int n, int r)
{
    int val = fact(n);
    int val1 = fact(r);
    int val2 = fact(n - r);

    int res = val / (val1 * val2);

    return res;
}

int main()
{
    // nCr = n! / r! (n-r)!
    

    cout << binoCoffe(6,3);
    return 0;
}