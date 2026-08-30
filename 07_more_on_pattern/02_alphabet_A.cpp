#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 1; row <= n; row++)
    {
        // cout << row / 2;
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 && col == 1 || row == 1 && col == n)
            {
                cout << "  ";
            }
            else if (row == 1 || row == ((n / 2) + 1) || col == 1 || col == n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (int row = 1; row <= n; row++)
    {
        // cout << row / 2;
        for (int col = 1; col <= n; col++)
        {
            if (row == ((n / 2) + 1) && col == n)
            {
                cout << " ";
            }
            else if (row == 1 || row == ((n / 2) + 1) || col == 1 || col == n || row == n)
            {
                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}