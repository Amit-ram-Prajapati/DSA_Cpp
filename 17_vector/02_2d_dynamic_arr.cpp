#include <iostream>
using namespace std;

int main()
{

    cout << "Enter row val : ";
    int row;
    cin >> row;
    cout << "\n";

    cout << "Enter col val : ";
    int col;
    cin >> col;
    cout << "\n";

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    int x = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = x;
            x++;
        }
    }

    return 0;
}
