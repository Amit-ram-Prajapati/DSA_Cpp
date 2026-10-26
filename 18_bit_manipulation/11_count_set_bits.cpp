#include <iostream>
using namespace std;
int countSetBits(int num)
{
    int count = 0;

    while (num != 0)
    {
        int lastBit = num & 1;
        if (lastBit > 0)
        {
            count++;
        }
        num = num >> 1;
    }

    return count;
}
int main()
{
    int num = 7;
    // int i = 2;
    cout << countSetBits(num);
    return 0;
}