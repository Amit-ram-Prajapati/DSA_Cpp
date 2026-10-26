#include <iostream>
#include <typeinfo>
using namespace std;

class Student
{
    // Properties of object
    string name; // 24 bytes
    int age;     // 4 bytes
};

int main()
{
    // int a = 0;
    Student s1;
    cout << typeid(s1).name() << "\n"; // 7Student beacuse it has 7 character
    cout << sizeof(s1) << "\n";        // 28 bytes
    return 0;
}