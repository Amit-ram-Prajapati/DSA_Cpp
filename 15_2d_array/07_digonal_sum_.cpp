#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{11, 20, 3}, {41, 15, -6}, {7, 8, 9}};
    // Sum of main digonal and secondary digonal //
    
    int digonalSum = 0;
    for (int row = 0; row < 3; row++)
    {

        if (row == row)
        {
            digonalSum += arr[row][row];
        }
        if (row != (3 - 1 - row))
        {
            digonalSum += arr[row][(3 - 1 - row)];
        }
        //
    }
    cout << digonalSum;

    return 0;
}