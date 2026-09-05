#include <iostream>
using namespace std;

void printSubarray(int arr[], int s)
{
    for (int st = 0; st < s; st++)
    {
        for (int end = st; end < s; end++)
        {
            // cout << "(" << st << "'" << end << ")";
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

// Time comp.. = 0(n^3);

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarray(arr, n);

    return 0;
}