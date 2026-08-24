#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 20, c = 8;
    if (a > b && a > c)
    {
        cout << "A is largest : " << a;
    }
    else if (b > c)
    {
        cout << "B is largest : " << b;
    }
    else
    {
        cout << "C is largest : " << c;
    }

    return 0;
}