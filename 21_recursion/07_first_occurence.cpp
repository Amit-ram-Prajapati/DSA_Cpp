#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> vec, int num, int i)
{
    if (i == vec.size())
    {
        return -1;
    }
    if (vec[i] == num)
    {
        return i;
    }
    else
    {
        return firstOccurence(vec, num, i + 1);
    }
}
int main()
{
    vector<int> vec = {2, 3, 4, 5, 9, 9, 9, 7, 7, 8};
    cout << firstOccurence(vec, 9, 0);
    return 0;
}