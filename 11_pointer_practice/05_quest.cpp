#include <iostream>
using namespace std;

int main()
{
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &chRef = ch;

    // cout << char('A' + 32)<< "\n";
    // cout << chRef << "\n"; // A
    chRef = chRef + a; // 'A' + 32 = 'a'
    *ptr = *ptr + ch;
    cout << a << " , " << ch << "\n";
    return 0;
}