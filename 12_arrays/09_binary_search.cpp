#include <iostream>
using namespace std;

// ************** Binary Search **************

// Condition - ==> array must be sorted <==

int binarySearch(int arr[], int size, int key)
{
    int st = 0;
    int end = size - 1;
    while (st <= end)

    {
        cout << "run" << "\n";
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            cout << st << " " << end << "\n";
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << st << " " << end << "\n";
    return -1;
}

int main()
{

    int nums[] = {11, 12, 15, 16, 17, 18, 19};
    int target = 14;
    int n = sizeof(nums) / sizeof(nums[0]);
    // cout << n;

    int res = binarySearch(nums, n, target);
    if (res == -1)
    {
        cout << "Value is not present in array.";
    }
    else
    {
        cout << "Value " << target << " Is found at index : " << res;
    }
    return 0;
}