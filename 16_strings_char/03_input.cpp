#include <iostream>
using namespace std;

int main()
{

    char code[5];
    char code2[5];
    cout << "Input using only cin : ";
    cin >> code; // only takes input until it hits space 
    cout << code << "\n";

    // To get whole setence we use getline
    cout << "Input using getline : ";
    cin.clear();
    cin.ignore(1000,'\n');
    cin.getline(code2, 50);
    cout << code2 << "\n";

    return 0;
}