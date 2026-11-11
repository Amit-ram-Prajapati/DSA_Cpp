#include <iostream>
#include <string>
using namespace std;

/*class Book
{
public:
    string title;
    double price;

    Book(string t, double p)
    {
        title = t;
        price = p;
    }
    // Custom copy constructor
    ClassName(const ClassName &other)
    {
        // Copy data from other
    }


    Book(const Book &other)
    {
        title = other.title;
        price = other.price;
        cout << "copy constructor called!" << "\n";
    }
    void display()
    {
        cout << "Title: " << title << "\n";
        cout << "Price: " << price << "\n";
    }
};
*/

class Student
{
public:
    string name;
    int marks;
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }
    Student(const Student &obj)
    {
        name = obj.name;
        marks = obj.marks;
    }
    void display()
    {
        cout << name << "\n";
        cout << marks << "\n";
    }
};
int main()
{
    /*Book b1("Geeta", 300);

    Book b2 = b1; // Copy construction
    b2.price = 500;
    b1.display();
    b2.display();
    */

    Student s1("Amit", 98);

    Student s2 = s1; // Copy constructor
    s1.display();
    s2.display();

    // Copy assignment
    /*Student s1("Amit", 98);
    Student s2("Rahul", 75);

    s2 = s1; // Copy assignment operator
    */
    return 0;
}