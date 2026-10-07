#include <iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int pass = 1; pass < n; pass++)
    {
        for (int i = 0; i < n - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr, i, i + 1);
            }
        }
    }
}
int main()
{

    int nums[] = {4, 50, 10, 40, 20, 30};
    int n = sizeof(nums) / sizeof(nums[0]);
    bubble_sort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}