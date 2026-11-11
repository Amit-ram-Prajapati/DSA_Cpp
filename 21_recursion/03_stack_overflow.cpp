#include <iostream>
using namespace std;

// This wil cause an infinte recursion
// stack overflow
void func()
{ // Base case is missing so it will run infinite

    cout << "Function calling...." << "\n";
    func();
}
int main()
{
    func();
    return 0;
}
// do not run this code if run then press ctrl + c to stop in terminal 