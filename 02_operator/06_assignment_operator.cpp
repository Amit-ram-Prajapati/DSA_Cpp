#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    // Plus Assignment
    a += b;  // a = a + b
    cout << "Plus Assignment : " << a << "\n"; // 15
   
    // Minus Assignment
    a -= b; // a = a - b
    cout << "Minus Assignment : " << a << "\n"; // 10
   
    // Multiply Assignment
    a *= b; // a = a * b
    cout << "Multiply Assignment : " << a << "\n"; // 50
    
    // Divide Assignment
    a /= b; // a = a / b
    cout << "Divide Assignment : " << a << "\n"; // 10
   
    // Modulus Assignment
    a %= b; // a = a % b
    cout << "Modulus Assignment : " << a << "\n"; // 0

    return 0;
}