#include <iostream>
using namespace std;

int main()
{
    int num;
    int num2;
    cout << "Enter value one : ";
    cin >> num;
    cout << "Enter value second : ";
    cin >> num2;

    int sum = num + num2;
    int prod = num * num2;
    int subtraction = num - num2;
    cout << "Sum of numbers : " << (sum) << "\n";
    cout << "Product  of numbers : " << (prod) << "\n";
    cout << "Subtraction of numbers : " << (subtraction) << "\n";

    return 0;
}