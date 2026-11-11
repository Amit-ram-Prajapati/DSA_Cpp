#include <iostream>
using namespace std;

void printNumbers(int num)
{
    if (num == 1)
    {
        cout << num << " ";
        return;
    }
    cout << num << " ";
    printNumbers(num - 1);
}

int main()
{
    printNumbers(10);
    return 0;
}