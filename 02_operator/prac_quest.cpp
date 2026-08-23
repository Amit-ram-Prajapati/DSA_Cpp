#include<iostream>
using namespace std;

int main(){

    int x = 2, y = 5;
    int exp1 = (x * y / x); // 10/2 = 5
    int exp2 = (x * (y / x)); // 2 * 2 = 4
    cout << exp1 << "\n";
    cout << exp2 << "\n";
    return 0;
}