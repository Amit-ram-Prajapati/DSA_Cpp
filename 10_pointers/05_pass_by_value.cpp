#include <iostream>
using namespace std;
int getValue(int a)
{
    a = 20;
    return a;
}

int main()
{
    int a = 10;
    cout << a << "\n"; // Original value of 'a' is 10.
    cout << getValue(a) << "\n"; // Pass by value - changes to 'a' inside the function don't affect the original variable.
    return 0;
}