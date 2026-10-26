#include <iostream>
using namespace std;

bool checkTwoPower(int num)
{

    if (!(num & (num - 1)))
    {
        return true;
    }
    return false;
}
int main()
{
    int num = 8; 

    cout << checkTwoPower(num);
    return 0;
}