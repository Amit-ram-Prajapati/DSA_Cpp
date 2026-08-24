#include <iostream>
using namespace std;

int main()
{
    // Continue keyword skips the iteration and allow loop to run till the condition is ture;
    int num = 10;
    for (int i = 1; i <= num; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    // Program where user can keep hitting numbers till they enter a multiple of 10

    int userNum;
    do
    {

        cout << "Enter numbers : ";
        cin >> userNum;

        if (userNum % 10 == 0)
        {
            continue;
        }
        cout << userNum << endl;
    } while (userNum < 100);

    return 0;
}
