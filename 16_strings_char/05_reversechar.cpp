#include <iostream>
#include <cstring>
using namespace std;

void reverseChar(char str[])
{
    int st = 0;
    int end = strlen(str) - 1;
    while (st <= end)
    {
        swap(str[st], str[end]);
        st++;
        end--;
    }
}

int main()
{

    char word[] = "Amit";
    reverseChar(word);
    cout << word << "\n";

    return 0;
}