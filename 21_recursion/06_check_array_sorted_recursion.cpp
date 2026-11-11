#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int i)

{
    if (i == arr.size() - 1)
    {
        return true;
    }

    if (arr[i] <= arr[i + 1])
    {
        return isSorted(arr, i + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> vec = {1, 4, 3, 4, 5, 6};
    int i = 0;
    cout << isSorted(vec, i);
    return 0;
}