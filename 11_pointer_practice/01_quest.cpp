#include<iostream>
using namespace std;

int main(){
    // Predict the output

    int x = 5, y = 10;
    int *ptr = &x;
    int *ptr1 = &y;

    ptr1 = ptr;
    cout << &x << "\n";
    cout << ptr << "\n";
    cout << ptr1 << "\n";

    return 0;
}