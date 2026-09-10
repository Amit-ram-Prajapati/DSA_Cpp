#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{11, 20, 3}, {41, 15, -6}, {7, 8, 9}};

    // This is called row-major traversal.
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
    }
    cout << endl;
    
    // This is called column-major traversal.
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cout << arr[row][col] << " ";
        }
    }

    return 0;
}