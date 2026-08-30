#include <iostream>
using namespace std;
int x = 10;

int main()
{
    cout << "Global Variable : " << x << "\n";
    if (true)
    {
        int a = 10; // local variable
    }
    // cout << a; // identifier "a" is undefined, Because it is a local to the if {}
    return 0;
}