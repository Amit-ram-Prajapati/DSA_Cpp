#include<iostream>
using namespace std;

int main(){

    cout << ~(6) << "\n";
               // 0 0 0 0 0 1 1 0 
// Find Not =>    1 1 1 1 1 0 0 1
// if msb (most significant bit ) here is 1 at the left most , it is a 1 then it is a negative number else positive

    // leave that bit and flip remaining
    // -1 1 1 1 1 0 0 1                      <====
    //    0 0 0 0 1 1 0 <=== one's complement    =
    //              + 1                          ====== all is the process of two's complement
    //            1 1 1                          =
    //              - 7                      <====
    return 0;
}