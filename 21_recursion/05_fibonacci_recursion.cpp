#include <iostream>
using namespace std;

int fib(int num)
{
    if(num == 0 || num == 1 ){
        // cout << num << " ";
        return num;
    }
    return fib(num - 1) + fib(num - 2);
}

int main()

{
    // nth term of fibonacci series 
    cout << fib(4);
    return 0;
}