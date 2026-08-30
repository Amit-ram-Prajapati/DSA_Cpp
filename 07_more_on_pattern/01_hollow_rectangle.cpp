#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 1; row <= n - 1; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n - 1 || col == 1 || col == n)
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