#include <iostream>
using namespace std;

int main()
{

    int marks[6];

    int len = sizeof(marks) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < len; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}