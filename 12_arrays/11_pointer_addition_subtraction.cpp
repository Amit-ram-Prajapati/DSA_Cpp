#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << "\n";
    // ptr + 3;
    cout << (ptr + 3) << "\n";

    cout << (ptr - 3) << "\n";
    return 0;
}