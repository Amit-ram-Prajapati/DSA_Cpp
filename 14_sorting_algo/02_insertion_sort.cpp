#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{

    for (int pass = 1; pass < n; pass++)
    {
        for (int i = pass; i > 0; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{

    int arr[5] = {50, 30, 20, 40, 10};
    insertion_sort(arr, 5);
    for (int i = 0; i < 5 ; i ++){
        cout << arr[i] << " ";
    }
        return 0;
}