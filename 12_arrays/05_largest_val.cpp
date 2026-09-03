#include <iostream>
using namespace std;

int main()
{

    int nums[10] = {2, 5, 34, -12, 3, 44, 55, 7, 54, 50};

    int n = sizeof(nums) / sizeof(int);
    int max = nums[0];
    int min = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
        if (nums[i] < min)
        {
            min= nums[i];
        }
    }
    cout << "Largest is : " << max << "\n";
    cout << "Smallest is : " << min << "\n";

    return 0;
}