#include <iostream>
#include <vector>
// vectors are part of STL
using namespace std;

int main()
{

    vector<int> vec = {1, 2, 3};
    cout << "Size : " << vec.size() << "\n";
    cout << "Capacity : " << vec.capacity() << "\n";

    vec.push_back(4);
    cout << "After insertion of one element " << "\n";
    cout << "Size : " << vec.size() << "\n";
    cout << "Capacity : " << vec.capacity() << "\n";

    return 0;
}