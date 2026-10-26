#include <iostream>
#include <typeinfo>
using namespace std;

class Student
{
public:
    // Properties of object
    string name = "amit"; // 24 bytes
    int age = 20;     // 4 bytes
    
};

int main()
{
    Student s1;
    // s1.printCourse();

    // values are not assigned
    // cout << s1.name << "\n"; // empty string
    // cout << s1.age << "\n"; // garbage value

    // after set the  val
    cout << s1.name << "\n";
    cout << s1.age << "\n";
    return 0;
}