#include <iostream>
#include <string>
using namespace std;
class Book
{

public:
    string title;
    string author;
    double price;

    Book()
    {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    Book(string t, string a, double p)
    {
        title = t;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "Title : " << title << "\n";
        cout << "Author : " << author << "\n";
        cout << "Price : " << price << "\n";
    }
};
int main()
{
    Book b1("Geeta", "Vedvyas ji", 300);
    Book b2; 
    


    b1.display();
    b2.display();

    return 0;
}
