#include<iostream>
using namespace std;
int main(){
    // Left shift operator
    cout << (6 << 2) << "\n";
    // 0 0 0 0 0 1 1 0 ==> 6
    // shift left by 2 bits means adding two zero on right
    // 0 0 0 1 1 0 0 0 ==> 24


    // Right shift operator
    cout << (6 >> 2) << "\n";
    // 0 0 0 0 0 1 1 0 ==> 6
    // shift right by 2 bits means adding two zero on left
    // 0 0 0 0 0 0 0 1 ==> 1
    cout << (15 >> 2) << "\n";
    return 0;
}