#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
// double sum(int a, int b) // cannot overload functions distinguished by return type alone
// {
//     return a + b;
// }
// int sum(double a, double b)
// {
//     return a + b;
// }
double sum(double a, double b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    // When many functions have same names but their type or parameters are different is called function overloading.
    cout << sum(10, 20, 20) << "\n";
    cout << sum(10, 20) << "\n";
    cout << sum(10.13, 20.12) << "\n";

    return 0;
}