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
    num--;
    printNumbers(num);
}

int main()
{
    printNumbers(10);
    return 0;
}