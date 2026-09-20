#include <iostream>
using namespace std;

void copyArr(int arr[], int s, int arr1[])
{
    for (int i = 0; i < s; i++)
    {
        arr1[i] = arr[i];
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int s = sizeof(arr) / sizeof(arr[0]);
    int copiedArr[s];
    copyArr(arr, s, copiedArr);
    for (int i = 0; i < s; i++)
    {
        cout << copiedArr[i] << " ";
    }

    return 0;
}