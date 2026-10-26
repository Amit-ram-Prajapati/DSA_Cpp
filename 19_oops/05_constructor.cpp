#include <iostream>
using namespace std;

class Smartphone
{
public:
    string brand;
    double price;
    string model;

    Smartphone()
    {
        cout << "constructor.." << "\n";
    }

    Smartphone(string brand, double price, string model)
    {
        this->brand = brand;
        this->price = price;
        this->model = model;
    }

    void callSomeone()
    {
        cout << "calling...." << "\n";
    }

    void watchVideos()
    {
        cout << "watching videos...." << "\n";
    }
};

int main()
{
    Smartphone m1("APPniCar", 2000000000, "AMi108");
    m1.callSomeone();
    m1.watchVideos();
    cout << m1.brand << "\n";
    return 0;
}