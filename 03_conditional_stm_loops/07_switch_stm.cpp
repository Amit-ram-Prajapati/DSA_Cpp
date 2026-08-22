#include <iostream>
using namespace std;

int main()
{

    int day = 2;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "TuesDay";
        break;
    case 3:
        cout << "Wednusday";
        break;

    default:
        cout << "Invalid Day";
        break;
    }
    return 0;
}