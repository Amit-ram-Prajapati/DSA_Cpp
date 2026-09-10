#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{11, 20, 3}, {41, 15, -6}, {7, 8, 9}};
    int maxElem  = arr[0][0];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if(arr[row][col] > maxElem){
                maxElem = arr[row][col];
            }
        }
    }
    cout << "Maximum Element is : " << maxElem;

    return 0;
}