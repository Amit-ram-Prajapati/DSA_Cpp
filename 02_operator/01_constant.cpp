#include <iostream>
#define X 25 // no extra space in memroy
#define LL long long
using namespace std;
int main(){
    const float PI = 3.14; // ocupy space in memory
    // PI = 3.14;
    const int Y = 35;
    LL y = 25;
    cout << X; // x is replaced with 25 on run time
    return 0;
}