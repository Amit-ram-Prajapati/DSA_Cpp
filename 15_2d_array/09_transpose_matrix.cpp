#include <iostream>
using namespace std;

void transPoseMat(int arr[3][2], int mat[][3])
{

    for (int col = 0; col < 2; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            mat[col][row] = arr[row][col];
        }
    }
}

int main()
{
    int mat[3][2] = {{11, 12}, {13, 14}, {15, 16}};
    int mat2[2][3];
    transPoseMat(mat, mat2);

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << mat2[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}