#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    double salary;

    Employee(string name, double salary)
    {
        this->name = name;
        this->salary = salary;
    }

    void display()
    {
        cout << name << " earns " << salary << "\n";
    }
};

int main()
{
    Employee e1("Amit", 25000);
    Employee e2("Priya", 35000);

    e1.display();
    e2.display();

    return 0;
}