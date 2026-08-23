#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 5;
    int exp1 = (y * (x / y + x / y));   // 20
    int exp2 = (y * x / y + y * x / y); // 20
    cout << exp1 << "\n";
    cout << exp2 << "\n";

    int a = 200, b = 50, c = 100;
    if (a > b && b > c)
    {
        cout << "I am learning c++" << "\n";
    }
    if (a > b && c < b)
    {
        cout << "I am learning c++ too" << "\n";
    }
    if ((b + 200) < a && (b + 150) < c)
    {
        cout << "Another c++" << "\n";
    }

    return 0;
} 