#include <iostream>
using namespace std;

int main()
{
    // ============== NULL Pointer  ==============
    // Do not point any memory address instead gives random memory address.
    int *pt = nullptr;
    cout << &pt << "\n";
    cout << pt << "\n";
    cout << *pt << "\n"; // crashes the program because it is trying to dereference a null pointer which is not allowed.
    return 0;
}