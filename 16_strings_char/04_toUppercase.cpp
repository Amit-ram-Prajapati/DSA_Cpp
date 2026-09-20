#include <iostream>
#include <cstring>
using namespace std;

void toUppercase(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            str[i] = (ch - 'a') + 'A';
        }
    }
    cout << str << "\n";
}
void toLowercase(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            str[i] = (ch - 'A') + 'a';
        }
    }
    cout << str << "\n";
}

int main()
{
    char word[] = "Amit";
    toUppercase(word, strlen(word));
    toLowercase(word, strlen(word));
    return 0;
}