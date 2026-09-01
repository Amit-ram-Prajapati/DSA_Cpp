#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // Predict the type
    float *a, b;
    int c = 10;
    cout << typeid(a).name() << "\n";
    cout << typeid(b).name() << "\n";
    cout << typeid(c).name() << "\n";
    return 0;
}