#include <iostream>
using namespace std;
int linearSerach(int *arr, int n, int k, bool &f)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            f = true;
            return i;
        }
    }

    return -1;
}
int main()
{
    int nums[4] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(int);
    int key = 1;
    bool isFound = false;

    int val = linearSerach(nums, n, key, isFound);
    if (isFound)
    {
        cout << key << " found at index : " << val;
    }
    else
    {
        cout << "Not found ";
    }
    // cout << val;

    return 0;
}