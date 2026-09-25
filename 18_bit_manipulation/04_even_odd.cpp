#include <iostream>
using namespace std;

int evenOdd(int n)
{
    if ((n & 1) == 0)
    {
        cout << "Even : " << n << "\n";
        return n;
    }
    else
    {
        cout << "odd : " << n << "\n";
        return n;
    }
}

int main()
{

    evenOdd(7);
    evenOdd(6);
    return 0;
}