#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int &b = a; // Now a and b is pointing to the same memory address
    b = 20;
    cout << a << "\n"; // 20 
    cout << b << "\n"; // 20
    return 0;
}