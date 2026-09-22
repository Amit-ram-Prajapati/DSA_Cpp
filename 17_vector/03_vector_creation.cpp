#include <iostream>
#include <vector>
// vectors are part of STL
using namespace std;

int main()
{
    vector<int> vec1;
    cout << vec1.size() << "\n";
    
    vector<int> vec2 = {1,2,3};
    cout << vec2.size() << "\n";
    
    vector<int> vec3(5, 2);
    cout << vec3.size() << "\n";

    return 0;
}