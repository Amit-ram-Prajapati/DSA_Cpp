#include <iostream>
#include <cstring>
using namespace std;

bool reverseChar(char str[])
{
    int st = 0;
    int end = strlen(str) - 1;

    while (st < end)
    {
        if (str[st] != str[end])
        {
            return false;
        }

        st++;
        end--;
    }
    return true;
}

int main()
{

    char word[] = "racecar";
    cout << reverseChar(word) << "\n";
    // cout << word << "\n";

    return 0;
}