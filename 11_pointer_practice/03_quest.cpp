#include <iostream>

using namespace std;

int main()
{
    // Predict the output
    int x ;
    int *ptr;
    x = 7 ;
    ptr = &x;
    cout << *ptr << "\n";

    return 0;
}