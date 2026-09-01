#include <iostream>
using namespace std;
// Pass by reference is a method of passing arguments to a function such that the function can modify the original variable's value. Instead of passing a copy of the variable, we pass the memory address (reference) of the variable. This allows the function to directly access and modify the original variable.

// Using pointers, we can achieve pass by reference in C++. When we pass a pointer to a function, the function can dereference the pointer to access and modify the original variable's value.
// int getValue(int *ptr)
// {
//     *ptr = 20;
//     return *ptr;
// }

// Using & operator, we can also achieve pass by reference in C++. When we pass a variable by reference using the & operator, the function can directly access and modify the original variable's value.

int getValue(int &b)
    {
        b = 20;
        return b;
    }

    int main()
{
    int a = 10;
    cout << a << "\n"; // Original value of 'a' is 10.
    cout << getValue(a) << "\n"; // Pass by reference - changes to 'a' inside the function will affect the original variable.
    cout << a << "\n"; // The value of 'a' has been modified to 20.
    return 0;
}