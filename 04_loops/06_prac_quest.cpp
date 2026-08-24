#include <iostream>
using namespace std;

int main()
{

    // Print Square pattern
    /*
     * * * *
     * * * *
     * * * *
     * * * *
     */

    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        cout << "* * * *" << "\n";
    }

    // Print numbers from n to 1
    int num = 10;
    for (int i = num; i >= 1; i--)
    {
        cout << i << "\n";
    }
    

    return 0;
}