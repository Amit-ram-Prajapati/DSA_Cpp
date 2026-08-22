#include <iostream>
using namespace std;

int main()
{
    int marks = 32;

    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 70)
    {
        cout << "Grade B";
    }
    else if (marks >= 50)
    {
        cout << "Grade C";
    }
    else if (marks >= 33)
    {

        cout << "Grade D";
    }
    else
    {
        cout << "Fail, try agian";
    }
    return 0;
}