#include <iostream>
using namespace std;

bool compareArr(int ar[], int ar1[], int s, int s1)
{
    bool equal = false;
    if (s != s1)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < s; i++)
        {
            if (ar[i] == ar1[i])
            {
                equal = true;
            }
            else
            {
                // equal = false;
                return false;
            }
        }
    }

    return equal;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int arr1[] = {10, 20, 30, 40, 50};
    int s = sizeof(arr) / sizeof(arr[0]);
    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    // cout << (20 == -20) << "\n";
    cout << compareArr(arr, arr1, s, s1);

    return 0;
}