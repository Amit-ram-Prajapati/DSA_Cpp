#include <iostream>
using namespace std;
// WAP to print product of 2 numbers

int product(int a, int b) // Function definition
{
    return a * b;
}

// WAP to print if a number is even or odd

bool evenOdd(int num)
{

    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int res = product(10, 20); // Funciton call
    cout << res << "\n";

    int res1 = evenOdd(8);
    cout << (res1 ? "Even" : "Odd");
    return 0;
}
