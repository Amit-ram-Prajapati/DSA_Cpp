#include <iostream>
using namespace std;

void multipleBy2(int &a, int &b, int &c)
{

    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{

    int x = 1, y = 2, z = 3;
    multipleBy2(x, y, z);
    cout << x << " ";
    cout << y << " ";
    cout << z << " ";
    return 0;
}