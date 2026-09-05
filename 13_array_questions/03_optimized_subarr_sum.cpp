#include <iostream>
using namespace std;

void printSubarray(int arr[], int s)

{
    int maxSum = INT8_MIN;
    for (int st = 0; st < s; st++)
    {
        int currentSum = 0;
        for (int end = st; end < s; end++)
        {
            currentSum += arr[end];
        }
        maxSum = max(currentSum, maxSum);
        // cout << maxSum << "\n";
    }
    cout << "Maximum subarray sum is : " << maxSum;
}

// Time comp.. = 0(n^2);

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarray(arr, n);

    return 0;
}