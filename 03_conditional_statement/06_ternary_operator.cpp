#include <iostream>
using namespace std;

int main()
{

    int age = 20;

    // if (age >= 18)
    // {
    //     cout << "You are adult";
    // }
    // else
    // {
    //     cout << "You are not adult";
    // }

    string isAdult;

    isAdult = age >= 18 ? "Adult" : "Child";

    cout << isAdult;
    return 0;
}