#include <iostream>
using namespace std;

int main()
{

    int val1;
    cout << "Enter the value first : ";
    cin >> val1;
    int val2;
    cout << "Enter the value second : ";
    cin >> val2;
    char opr;
    cout << "Enter the operation : ";
    cin >> opr;

    switch (opr)
    {
    case '+':
        cout << "Addtion is : " << (val1 + val2);
        break;
    case '-':
        cout << "Subtraction is : " << (val1 - val2);
        break;
    case '*':
        cout << "Multiplication is : " << (val1 * val2);
        break;
    case '/':
        cout << "Division is : " << (val1 / val2);
        break;

    default:
        cout << "Invalid Operator, use(+ , - , * , /)";
        break;
    }

    return 0;
}