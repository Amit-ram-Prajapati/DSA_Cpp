#include <iostream>
using namespace std;

int setithBit(int n, int pos)
{
    int bitMask = ~(1 << pos);
    return (n & bitMask);
}
int main()
{
    int num = 6; // 0110
    int i = 3;

    cout << setithBit(num, i);
    return 0;
}