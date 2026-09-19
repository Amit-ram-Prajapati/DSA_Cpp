#include <iostream>
using namespace std;

// Linear search

// int getTarget(int arr[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (key == arr[i])
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// Binary search
int getTarget(int arr[], int n, int key)
{
    int st = 0;
    int end = n - 1 ;
    while (st <= end)
    {
        cout << "run" << "\n";
        int mid = end + (st - end) / 2;
        cout << arr[mid] << "\n";
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 55};
    int s = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    cout << getTarget(arr, s, target);

    return 0;
}