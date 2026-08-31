#include <iostream>
using namespace std;

int decTobin(int num)
{
    int pow = 1;
    int ans = 0;
    while (num != 0)
    {

        int rem = num % 2;
        ans = ans + (rem * pow);
        pow *= 10;
        num = num / 2;
    }

    return ans;
}

int main()
{

    cout << decTobin(10);
    return 0;
}