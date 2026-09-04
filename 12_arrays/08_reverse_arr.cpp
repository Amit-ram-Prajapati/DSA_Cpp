#include <iostream>
using namespace std;

int reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1; // Here is size - 1 because size gives number of element present in array and array index start from 0 threfore we need to do -1 so, if size is 6 then we have to iterate form 0 to 6 - 1(5) .
    for (int i = 0; i < size; i++)
    {
        // Here swap logic is used to swap first end last element
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; // ++ so start moves one step ahead after swaping
        end--;   // -- so start moves one step down after swaping
        if (start >= end)// start >= end because only this is a condition where will array will be in reversed order 
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