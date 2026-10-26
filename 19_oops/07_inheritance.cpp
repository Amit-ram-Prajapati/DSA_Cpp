#include <iostream>
using namespace std;

class Product // base / super / parent
{
protected:
    string bluePrint = "N/A";

public:
    string brand;
    double price;

    void hasDiscount()
    {
        cout << "discount" << "\n";
    }
};

class Phone : protected Product
{
public:
    string camera;
    string batreyPower;

    void watchVideos()
    {
        cout << bluePrint << "\n";
        cout << "watch videos" << "\n";
    }
};
int main()
{
    Phone m1;
    m1.camera = "40mgeaPixels";
    // m1.hasDiscount();
    m1.watchVideos();

    return 0;
}