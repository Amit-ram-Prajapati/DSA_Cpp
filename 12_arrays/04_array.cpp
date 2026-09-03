#include <iostream>
using namespace std;

void printArr(int nums[] ,int n)
{
    cout << n;
}
int main()
{

    int marks[6] = {1, 2, 3};
    int len = sizeof(marks) / sizeof(int);

    cout << marks << "\n"; // Address of memory
    cout << *marks << "\n"; // First index value
    cout << *marks + 1 << "\n"; // First + 1 index value
    return 0;
}