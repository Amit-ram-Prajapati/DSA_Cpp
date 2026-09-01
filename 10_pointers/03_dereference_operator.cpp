#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *ptr = &a;
    // Dereference Operator => use to get value of a variable whose address is stored by pointer variable.
    cout << *ptr << "\n";

    // Any changes to the pointer variable will also affect actual variable.
    *ptr = 20;

    cout << *ptr << "\n";
    cout << a << "\n";

    return 0;
}