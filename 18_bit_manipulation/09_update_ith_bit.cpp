#include <iostream>
using namespace std;

int updateIthBit(int num, int i, int val)
{

    num = num & ~(1 << i);
    num = num | (val << i);
    
    return num;
}
int main()
{
    int num = 7;
    int i = 3;
    int val = 1;

    cout << updateIthBit(num, i, val);
    return 0;
}