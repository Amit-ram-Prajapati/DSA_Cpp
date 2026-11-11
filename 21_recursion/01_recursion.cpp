#include <iostream>
using namespace std;

// when a function repeatedly calls itself

/*
void func(){ // Base case is missing so it will run infinite

    cout << "Function calling...." << "\n";
    func();
}
*/
void printNumbers(int num){
    if(num >= 10){
        cout << num << " ";
        return;
    }
    cout << num << " ";
    num++;
    printNumbers(num);
}

/*
1. Base case
2. Smallest problem
3. Faith
*/

int factorial(int num){
    if( num == 0 || num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(){
    printNumbers(1);
    cout << "\n" <<  factorial(5);
    return 0;
}