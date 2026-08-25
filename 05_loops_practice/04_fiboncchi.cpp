#include <iostream>
using namespace std;

int main()
{
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm = 0;
    cout << "\t<===Fibbonachi Series===>\n";
    cout << firstTerm << "\n";
    cout << secondTerm << "\n";

    for (int i = 2; i <= 20; i++)
    {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << "\n";
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}