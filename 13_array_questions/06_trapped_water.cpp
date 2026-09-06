#include <iostream>
using namespace std;

int trapped(int arr[], int n)

{
    int totalTrappedwater = 0;

    int leftMax[200000];
    leftMax[0] = arr[0];

    // cout << leftMax[0] << ",";

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
        // cout << leftMax[i] << ",";
    }
    // cout << "\n";

    int rightMax[200000];
    rightMax[0] = arr[n - 1];

    // cout << rightMax[n - 1] << ",";

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], arr[i + 1]);
        // cout << rightMax[i] << ",";
    }

    // cout << "\n";

    for (int i = 0; i < n; i++)
    {
        int currentTrappedSpace = min(leftMax[i], rightMax[i]) - arr[i];
        // cout << currentTrappedSpace << ",";
        if (currentTrappedSpace > 0)
        {
            totalTrappedwater += currentTrappedSpace;
        }
    }

    return totalTrappedwater;
}

int main()
{

    int barsH[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(barsH) / sizeof(barsH[0]);
    cout << trapped(barsH, n);

    return 0;
}