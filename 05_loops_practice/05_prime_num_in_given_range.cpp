#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num = 50;
    for (int j = 3; j <= 100; j++)
    {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(j); ++i)
        {
            if (j % i == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
            }
        }
        if (isPrime)
        {
            cout << j << endl;
        }

        /* code */
    }

    return 0;
}