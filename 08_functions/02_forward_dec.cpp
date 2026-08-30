#include <iostream>
using namespace std;
// It is a forward declaration

void sum(); // Function declaration

int main()
{
    sum(); // Funciton call
    return 0;
}

void sum() // Function definition
{

    cout << "Sum : " << 10 + 20;
}