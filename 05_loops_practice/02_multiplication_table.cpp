#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number for printing its table : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << i * n << "\n";
    }
    return 0;
}