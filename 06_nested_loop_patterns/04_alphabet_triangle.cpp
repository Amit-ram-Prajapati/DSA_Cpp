#include <iostream>
using namespace std;
int main()
{

    /* ================================
        A
        B C
        D E F
        G H I J
       ================================ */

    int n = 5;
    char val = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val++ << " ";
        }
        cout << "\n";
    }
    return 0;
}