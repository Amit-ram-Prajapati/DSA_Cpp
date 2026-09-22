#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Amit prajapati";
    str.append(" Bca student");
    cout << str << "\n";

    // It is mutable 
    str = "I am a developer";
    cout << str << "\n";
    return 0;
}