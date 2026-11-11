#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Student created\n";
    }

    ~Student()
    {
        cout << "Student destroyed\n";
    }
};

int main()
{
    Student s1;

    cout << "Inside main\n";

    return 0;
}