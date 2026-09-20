#include <iostream>
using namespace std;

void insertionAtbegin(int arr[], int s, int elem)
{
    int n = s - 1;
    
    for (int i = 0; i < s - 1; i++)
    {
        arr[n - i] = arr[n - i - 1];
    }
    arr[0] = elem;
}

int main()
{

    int arr[6] = {10, 20, 30, 40, 50};
    // int s = sizeof(arr) / sizeof(arr[0]);
    insertionAtbegin(arr, 6, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}