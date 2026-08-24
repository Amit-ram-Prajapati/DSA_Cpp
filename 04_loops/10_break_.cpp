#include <iostream>
using namespace std;

int main()
{ // Break keyword Terminates loops at specific condition
    int num = 10;
    while (num != 0)
    {
        if (num == 5)
        {
            break;
        }
        cout << num << " ";
        num--;
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
            cout << "User hits multiple of 10";
            break;
        }
        cout << userNum << endl;
    } while (true);

    return 0;
}