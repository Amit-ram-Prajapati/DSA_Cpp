#include <iostream>
using namespace std;
int main()
{

    /* ================================
              *
            * * *
          * * * * *
        * * * * * * *
        * * * * * * *
          * * * * *
            * * *
              *
       ================================ */

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        for (int l = 1; l <= i-1; l++)
        {
            // for (int m = 1; m <= l; m++)
            // {
            // }
            cout << " *";
            // cout << "\n";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = n; k >= i; k--)
        {
            cout << " *";
        }
        for (int l = n-1; l >= i; l--)
        {
            // for (int m = 1; m <= l; m++)
            // {
            // }
            cout << " *";
            // cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}