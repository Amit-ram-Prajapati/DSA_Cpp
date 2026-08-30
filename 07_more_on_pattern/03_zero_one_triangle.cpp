#include <iostream>
using namespace std;

int main()
{
    /*
    ==================================
    1
    0 1
    1 0 1
    0 1 0 1
    ==================================
    */
    int n = 5;

    for (int row = 1; row <= n - 1; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    return 0;
}