#include <iostream>
#include <string>
using namespace std;

/*class Book
{

public:
    string title;
    string author;
    double price;

    void display()
    {
        cout << "Title : " << title << "\n";
        cout << "Author : " << author << "\n";
        cout << "Price : " << price << "\n";
    }
};
*/
/*class Employee
{
public:
    string name;
    int id;
    double salary;

    void display()
    {
        cout << "Employee ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "------------------\n";
    }
};
*/

class Circle
{
public:
    float radius;

    double area()
    {
        double result = 3.14 * radius * radius;
        return result;
    }
};
int main()
{

    /*Book b1, b2;

    b1.title = "Do not make too many Mistakes";
    b1.author = "Amit Prajapati";
    b1.price = 999.99;

    b1.display();


    b2.title = "Do not leave Dreams";
    b2.author = "Amit Prajapati";
    b2.price = 999.99;

    b2.display();
*/

    /* Employee e1, e2, e3;

     e1.id = 101;
     e1.name = "Rohit";
     e1.salary = 20000000;
     e1.display();

     e2.id = 102;
     e2.name = "Mohit";
     e2.salary = 22000000;
     e2.display();

     e3.id = 103;
     e3.name = "Sohit";
     e3.salary = 24000000;
     e3.display();
     */

    Circle c1, c2;

    c1.radius = 8;
    cout << c1.area() << "\n";
    c2.radius = 4.5;
    cout << c2.area() << "\n";
    return 0;
}