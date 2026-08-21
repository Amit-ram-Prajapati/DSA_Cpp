#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    // === *** Primitive Data Types *** == 
    // 1. Integer  
    // 1 byte = 8 bits
    // Memory size : 4 bytes 4x8 = 32bits
    int age = 15;
    cout << sizeof(int) << endl; // 4 
    cout << "Age is : " << age << endl;

    // 2. Character : stores single character i.e 'a' , 'b' etc
    // Memory size : 1byte  1x8 = 8bits
    char startwith = '@';
    cout << sizeof(char) << endl; // 1
    cout <<"Username should be start with : " << startwith << endl;
    
    // 3. Boolean : It stores true(1) and false(0)
    // Memory size : 1byte  1x8 = 8bits
    bool isValid = true;
    cout << sizeof(bool) << "\n"; // 1
    cout << isValid << "\n";
    
    // 4. Floating point 
    // Memory size : 4 bytes 4x8 = 32bits
    float PI = 3.1459; 
    cout<< sizeof(float) << "\n";//4
    cout<< PI << "\n";
    
    // 5 . Double floating point
    // Memory size : 8 bytes 8x8 = 64 bits
    // double price = 9.999999; // 10
    double price = 9.99; // 9.99 
    cout << sizeof(double) << "\n";
    cout << price << "\n";

    return 0;
}