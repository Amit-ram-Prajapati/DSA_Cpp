#include <iostream>
using namespace std;
int clearLastithBits(int num, int i)
{
    return (num & ((~0) << i));
}
int main()
{
    int num = 8;
    int i = 2;
    cout << clearLastithBits(num, i);
    return 0;
}