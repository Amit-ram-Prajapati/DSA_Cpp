#include<iostream>
using namespace std;

int main(){

    // 1. Bitwise AND & return true only if both bits is 1
    cout << "AND & operator" << "\n";
    cout << (1 & 0) << "\n";
    cout << (1 & 1) << "\n";
    cout << (3 & 2) << "\n"; //2 
    // 3 -> 0011
    // 2 -> 0010
    // & -> 0010 =(2)

    // 2. Bitwise OR | return true if one of bit is 1
    cout << "OR | operator" << "\n";
    cout << (1 | 0) << "\n";
    cout << (1 | 1) << "\n";
    cout << (0 | 0) << "\n";
    cout << (3 | 2) << "\n";
    // 3 -> 0011
    // 2 -> 0010
    // | -> 0011 =(3)
    // 3. Bitwise XOR ^ return 0 when both bits are similar wheather 0 or 1
    cout << "XOR | operator" << "\n";
    cout << (1 ^ 0) << "\n";
    cout << (1 ^ 1) << "\n";
    cout << (0 ^ 0) << "\n";
    cout << (3 ^ 2) << "\n";
    // 3 -> 0011
    // 2 -> 0010
    // ^ -> 0001 =(1)
    return 0;
}