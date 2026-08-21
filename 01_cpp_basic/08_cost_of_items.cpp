#include <iostream>
using namespace std;

int main()
{

    float pencil;
    float pen;
    float eraser;

    cout << "Enter the price of Pencil : ";
    cin >> pencil;
    cout << "Enter the price of Pen : ";
    cin >> pen;
    cout << "Enter the price of Eraser : ";
    cin >> eraser;

    float totalAmount = pen + pencil + eraser;
    float finalAmount = totalAmount + (totalAmount * 18) / 100;
    cout << "==== You are bill reciept ===== \n";
    cout << "Pencil : " << pencil << "rs.\n";
    cout << "Pen : " << pen << "rs.\n";
    cout << "Eraser: " << eraser << "rs.\n";
    cout << "===============================\n";
    cout << "Total amount : " << finalAmount << "INR" << "\n";
    cout << "*** Including 18% GST ***";

    return 0;
}