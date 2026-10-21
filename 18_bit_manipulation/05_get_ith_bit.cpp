#include <iostream>
using namespace std;

int getithBit(int n, int pos)
{

    int bitMask = 1 << pos;
    cout << bitMask << "\n";
    cout << n << "\n";
    // int res = n && bitMask;
    // cout << res << "\n";

    // NOTE : do not use && operator for bit manipulation, use & operator instead beacause && checks true and false but & this do operation on bits;

    if (!(n & bitMask))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num = 6; // 0110
    int i = 3;

    cout << getithBit(num, i);

    return 0;
}