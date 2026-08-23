#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
   // Logical AND operator => It returns true if both the operands are true otherwise it returns false.
   cout << "Logical AND : " << (a > b && b > 0) << "\n"; // 1
   cout << "Logical AND : " << (a > b && b < 0) << "\n"; // 0
   // Logical OR operator => It returns true if any of the operands is true otherwise it returns false.
   cout << "Logical OR : " << (a > b || b < 0) << "\n"; // 1
   cout << "Logical OR : " << (a < b || b < 0) << "\n"; // 0
   // Logical NOT operator => It returns true if the operand is false and vice versa.
   cout << "Logical NOT : " << !(a > b) << "\n"; // 0
   cout << "Logical NOT : " << !(a < b) << "\n"; // 1

    return 0;
}