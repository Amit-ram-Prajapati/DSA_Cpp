#include<iostream>
using namespace std;

int main(){

    int marks[5] = {1, 2, 3, 4, 5};

    cout << sizeof(marks) << "\n";
    cout << sizeof(marks) / sizeof(marks[0])<< "\n";
    return 0;
}