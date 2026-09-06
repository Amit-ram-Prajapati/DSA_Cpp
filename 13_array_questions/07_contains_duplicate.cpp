#include <iostream>
using namespace std;

bool containsDuplicate(int arr[], int s)
{

    for (int i = 0; i < s; i++)

    {
        cout << "run" << "\n";

        for (int j = i + 1; j < s; j++)
        {
            cout << "2run" << "\n";
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << containsDuplicate(nums, n);
    return 0;
}