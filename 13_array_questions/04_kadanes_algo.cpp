#include <iostream>
using namespace std;

void printSubarray(int arr[], int s)

{
    int maxSum = INT8_MIN;
    int currentSum = 0;
    for (int i = 0; i < s; i++)
    {
        currentSum += arr[i];
        maxSum = max(maxSum , currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }

        // cout << maxSum << "\n";
    }
    cout << "Maximum subarray sum is : " << maxSum;
}

// Time comp.. = 0(n);

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    // int arr[] = {-2, -3, -6, -5, -4, -7};// output = -2
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarray(arr, n);

    return 0;
}