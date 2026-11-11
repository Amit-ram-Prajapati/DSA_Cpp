#include <iostream>
#include <vector>
using namespace std;

int powerOfX(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int halfPower = powerOfX(x, n / 2);
    int halfPowerSquare = halfPower * halfPower;

    if (n % 2 == 0)
    {
        return halfPowerSquare;
    }
    else
    {
        return x * halfPowerSquare;
    }
}
int main()
{
    cout << powerOfX(2, -10);
    return 0;
}