#include <iostream>
using namespace std;

int findTarget(int nums[], int s, int key)
{
    int st = 0;
    int end = s - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        cout << "run";
        if (nums[mid] == key)
        {
            return mid;
        }
        else if (nums[st] <= nums[mid])
        {
            if (nums[st] <= key && nums[mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else{
            if(nums[mid] < key && nums[end] >= key ){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    cout << n << "\n";
    cout << findTarget(arr, n, target);
    return 0;
}