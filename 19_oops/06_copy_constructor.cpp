#include <iostream>
using namespace std;

class Smartphone
{
public:
    string brand;
    double price;
    string model;

    Smartphone(string brand, double price, string model)
    {
        this->brand = brand;
        this->price = price;
        this->model = model;
    }
};

int main()
{
    Smartphone m1("APPniCar", 2000000000, "AMi108");
    Smartphone m2(m1);

    m2.brand = "amit";
    cout << m1.brand << "\n";
    cout << m2.brand << "\n";
    return 0;
}