#include <iostream>
using namespace std;

int reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    for (int i = 0; i < size; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        if (start >= end)
        {
            return 0;
        }
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5,6};

    int n = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
    reverseArr(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}