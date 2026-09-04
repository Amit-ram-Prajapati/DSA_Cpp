#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 20;
    // cout << arr << " ";
}

// ==== same as ====
// void func2(int *ptr)
// {
//     ptr[0] = 30;
// }
int main()
{
    int nums[4] = {1, 2, 3, 4};
    cout << nums[0] << "\n"; // 1
    func(nums);
    // int *ptr = nums;
    cout << nums[0];
    return 0;
}