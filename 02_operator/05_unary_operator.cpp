#include <iostream>
using namespace std;

int main()
{
    // Post Increment and Pre Increment
    int a = 5;
    int b = a++;
    cout << b << "\n";                        // 5
    cout << "Post Increment : " << a << "\n"; // 6
    int c = ++a;
    cout << "Pre Increment : " << a << "\n"; // 7
    cout << "Pre Increment Value : " << c << "\n"; // 7

    // Post Decrement and Pre Decrement
    int d = 5;
    int e = d--;
    cout << e << "\n";                        // 5
    cout << "Post Decrement : " << d << "\n"; // 4
    int f = --d;
    cout << "Pre Decrement : " << d << "\n"; // 3
    cout << "Pre Decrement Value : " << f << "\n"; // 3

    return 0;
}