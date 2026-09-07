#include <iostream>
using namespace std;

void printSubarray(int arr[], int s)

{

    int maxProduct = INT8_MIN;
    for (int st = 0; st < s; st++)
    {
        for (int end = st; end < s; end++)
        {
            int currentPro = 1;
            for (int i = st; i <= end; i++)
            {
                currentPro *= arr[i];
            }
            maxProduct = max(maxProduct, currentPro);
        }
    }
    cout << maxProduct;
}

int main()
{

    int arr[] = {3, -1, 4};

    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarray(arr, n);

    return 0;
}