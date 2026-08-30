#include <iostream>
#include <cmath>
using namespace std;

int solveEquation(int a, int b)
{
    return pow(a, 2) + pow(b, 2) + 2 * a * b;
}

char nextChar(char ch)

{
    if (ch == 'z')
    {
        return 'a';
    }
    else if (ch == 'Z')
    {
        return 'A';
    }
    else if (int(ch) >= int('A') && int(ch) <= int('Z'))
    {

        return ch + 1;
    }
    else if (int(ch) >= int('a') && int(ch) <= int('z'))
    {

        return ch + 1;
    }
    else
    {

        return ch;
    }
}
int main()
{
    // write a function whcih takes two numbers as parameters (a & b ) and return a * 2 + b*2 + 2ab
    cout << solveEquation(2, 4) << "\n";
    cout << nextChar('@') << "\n";
    return 0;
}