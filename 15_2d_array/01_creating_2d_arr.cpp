#include <iostream>
using namespace std;

/* A 2D array is basically an array arranged in rows and columns.

            col 0   col 1   col 2
    row 0     10      20      30
    row 1     40      50      60
    row 2     70      80      90

*/

int main()
{
    // Creation of 2D Arrays
    int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    // Indexing in 2D Arrays
        cout << arr[0][0] << " " ; // 10
        cout << arr[0][1] << " " ; // 20
        cout << arr[0][2] << " " ; // 30

        cout << arr[1][0] << " " ; // 40
        cout << arr[1][1] << " " ; // 50
        cout << arr[1][2] << " " ; // 60

        cout << arr[2][0] << " " ; // 70
        cout << arr[2][1] << " " ; // 80
        cout << arr[2][2] << " " ; // 90
        return 0;
}