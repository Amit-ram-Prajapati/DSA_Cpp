#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "Amit";

    for(char ch : str){
        cout <<  " | " << ch;
    }
    return 0;
}