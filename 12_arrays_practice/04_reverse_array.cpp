#include <iostream>
using namespace std;

void swapElem(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void reverseArr(int arr[], int n)
{
    int st = 0;
    int end = n - 1;
    while (st <= end)
    {
        swapElem(arr, st, end);
        st++;
        end--;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int s = sizeof(arr) / sizeof(arr[0]);
    reverseArr(arr ,s);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}