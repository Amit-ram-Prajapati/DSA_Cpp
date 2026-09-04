#include <iostream>
using namespace std;

int main()
{

    int marks[6];
    int n;

    // int len = sizeof(marks) / sizeof(int);
    cout << "Enter size of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)

    {
        cout << "Enter marks : ";
        cin >> marks[i];
    }

    cout << "Marks are : ";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}