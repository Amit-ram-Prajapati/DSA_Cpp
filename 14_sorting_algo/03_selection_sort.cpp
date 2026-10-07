#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{

    for (int pass = 0; pass < n - 1; pass++)
    {
        int minIdx = pass;
        for (int i = pass + 1; i < n; i++)
        {

            if (arr[i] < arr[minIdx])
            {
                minIdx = i;
            }
        }
        if (arr[pass] > arr[minIdx])
        {
            swap(arr[pass], arr[minIdx]);
        }
    }
}

int main()
{

    int arr[5] = {50, 30, 20, 40, 35};
    selection_sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}