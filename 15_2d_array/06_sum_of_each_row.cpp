#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{11, 20, 3}, {41, 15, -6}, {7, 8, 9}};
    // ====== Sum of each row ====== //
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << "sum of " << (row + 1) << " row is : " << sum << "\n";
    }
    cout << endl;

    // ====== Sum of each column ====== //

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << "sum of " << (col + 1) << " column is : " << sum << "\n";
    }

    return 0;
}