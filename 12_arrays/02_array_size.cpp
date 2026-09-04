#include<iostream>
using namespace std;

int main(){

    int marks[5] = {1, 2, 3, 4, 5};

    cout << sizeof(marks) << "\n"; // 20
    // Beacause it is a integer type array and each int variable takes 4 byte memory so in array each block has 4 byte memory and its length is 5 hence 5 X 4 = 20 byte 
    cout << sizeof(marks) / sizeof(marks[0])<< "\n";
    return 0;
}