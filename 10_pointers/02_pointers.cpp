#include <iostream>
using namespace std;

int main()
{
    // ================ Pointers ================
    // Pointers are special type of variable that stores the  address of another variable.
    int a = 10;
    int *ptr = &a;

    // int *ptr; // allow

    // int *ptr = a; // It is a pointer variable and it only holds the address of other variable so direct variable assignment is not allowed.
    cout << ptr << "\n"; // 0x61ff08
    cout << &a; // 0x61ff08
    return 0;
}