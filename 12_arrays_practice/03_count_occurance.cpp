#include <iostream>
using namespace std;

int countOccurance(int arr[], int n, int val)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (val == arr[i])
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 20, 3, 20, 60, 56};
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << countOccurance(arr, s, 20);

    return 0;
}