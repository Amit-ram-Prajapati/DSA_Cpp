#include<iostream>
using namespace std;

int main(){
    // Conversion of data from one type to another
    // 1. Implicit ==> automatic , Done by compiler to avoid data loss
    cout << (10 / 3) << "\n";
    cout << (10 / 3.0) << "\n";
    cout << ('a' + 1) << "\n";
    // bool => char => int => float => double
    
    // 2. Explicit conversion
    cout << int('a') << "\n";
    cout << char(98) << "\n";
    cout << char('a' + 1) << "\n";

    return 0;
}