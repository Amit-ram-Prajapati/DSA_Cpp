#include <iostream>
using namespace std;

int main()
{

    char code[] = "Jay shree ram";
    cout << code << "\n";

    char code1[4] = "ram";
    cout << code1 << "\n";

    char code2[] = {'r','a','m','\0'};
    cout << code2 << "\n";

    char code3[40] = {'r','a','m','\0'};
    cout << code3 << "\n";

    return 0;
}