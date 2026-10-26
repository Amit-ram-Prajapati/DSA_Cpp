#include <iostream>
using namespace std;

class Student
{
public:
    // Properties of object
    string name; // 24 bytes
    int age;     // 4 bytes

    // setters
    // void setName(string name)
    // {
    //     name = name;
    // }
    // problem with above setter method is that it is not assigning a value to name beacause:
    /*
        function params is -> name
        class member variable is also -> name

        writing name = name
        assigns the param to itself
        and does not touch the obj's member vaiabel at all

    */

    // solution is this-> keyword
    // this points to the current obj
    void setName(string name)
    {
        this->name = name;
    }

    // getter
    string getName()
    {
        return name;
    }
};

int main()
{
    Student s1;
    s1.setName("amit");

    cout << s1.getName() << "\n";

    return 0;
}