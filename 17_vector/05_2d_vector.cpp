#include <iostream>
#include <vector>
// vectors are part of STL
using namespace std;

int main()
{
    vector<vector<int> > vec1 = { {1, 2, 3}, {4, 5, 6}};
    // vector<vector<int>> vec = {{1, 2, 3}, {4, 5}, {7}};

    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}