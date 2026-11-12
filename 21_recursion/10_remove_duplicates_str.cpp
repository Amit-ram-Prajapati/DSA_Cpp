#include <iostream>
#include <vector>
#include <string>
using namespace std;

void removeDuplicate(string str, string ans, int i, vector<int> map)
{
    if (i == str.size())
    {
        cout << ans << " ";
        return;
    }
    char ch = str[i];
    int mapInd = (int)(ch - 'a');

    if (map[mapInd])
    {
        removeDuplicate(str, ans, i + 1, map);
    }
    else
    {
        map[mapInd] = true;
        removeDuplicate(str, ans += ch, i + 1, map);
    }
}

int main()
{
    vector<int> vec(26, false);
    string str = "apnacollege";
    int i = 0;
    string ans = "";
    removeDuplicate(str, ans, i, vec);
    return 0;
}