#include <iostream>
using namespace std;

int binTodec(int num)
{
    int pow = 1;
    int ans = 0;
    while (num != 0)
    {

        int rem = num % 10;
        ans = ans + (rem * pow);
        pow *= 2;
        num = num / 10;
    }

    return ans;
}

int main()
{

    cout << binTodec(1101);
    return 0;
}