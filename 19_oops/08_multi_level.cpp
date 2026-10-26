#include <iostream>
using namespace std;

class A
{
public:
    int val = 0;

    void print()
    {
        cout << "A : " << val << "\n";
    }
};
class B : public A
{
public:
    void msgB()
    {
        cout << "Class B" << "\n";
    }
};
class C : public B
{
public:
    void msg()
    {
        cout << "Class C" << "\n";
    }
};

int main()
{
    C c1;
    c1.msgB();
    c1.print();
    cout << c1.val << "\n";
    return 0;
}