#include <iostream>
using namespace std;

void printSubarray(int arr[], int s)

{
    int maxSum = INT8_MIN;
    for (int st = 0; st < s; st++)
    {
        for (int end = st; end < s; end++)
        {
            int currentSum = 0;
            // cout << "(" << st << "'" << end << ")";
            for (int i = st; i <= end; i++)

            {
                currentSum += arr[i];
            }
            // cout << currentSum;
            // cout << " ";
            maxSum = max(currentSum, maxSum);
        }
        // cout << endl;
    }
    cout << "Maximum subarray sum is : " << maxSum;
}

// Time comp.. = 0(n^3);

int main()
{

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarray(arr, n);

    return 0;
}