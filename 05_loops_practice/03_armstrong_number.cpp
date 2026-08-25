#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num, sum = 0;
    cout << "\tArmstrong Number checker" << "\n";
    cout << "Enter a number : ";
    cin >> num;

    int temp = num;

    while (num != 0)
    {
        int digit = num % 10;
        int cube_digit = round(pow(digit, 3));
        // Here I use round beacuse when pow(5,3) runs it was giving 124 instead 125 therefore It is not validating armstrong number accurately
        // cout << "Power " << cube_digit << "\n";
        sum += cube_digit;
        num = num / 10;
    }

    if (temp == sum)
    {
        cout << "It is a armstrong number";
    }
    else
    {

        cout << "It is not a armstrong number";
    }
    return 0;
}