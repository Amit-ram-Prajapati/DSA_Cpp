#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << "\n";
    ptr++;
    cout << ptr << "\n";
    return 0;
}