#include <iostream>
using namespace std;

int findTarget(int arr[][3],int key )
{
    // Find target element
    // int get = 7;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == key)
            {
                cout << row << "," << col << "\n";
                return 0;
            }
        }
    }

    return -1 ;
}

int main()
{
    int arr[3][3] = {
        {11, 20, 3},
        {41, 15, -6},
        {7, 8, 9}};
    int target = 8;
    cout << findTarget(arr, target);
    return 0;
}