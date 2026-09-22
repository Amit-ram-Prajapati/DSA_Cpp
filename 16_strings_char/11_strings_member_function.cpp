#include<iostream>
#include<string>
using namespace std;

int main(){

    // 1. Length
    string str = "Amit prajapati. A bca student";
    cout << "Length : "<< str.length() << "\n";

    // 2. access character
    cout << "Character at index 2 : " << str.at(2) << "\n";

    // 3, sub string
    cout << "Sub string : " <<  str.substr(5, 5) << "\n";

    // 4. find
    cout << str.find("bca") << "\n";
    // cout << str.find("b.tech") << "\n"; // random value
    int index = str.find("b.tech");
    cout << index << "\n"; // now -1
    return 0;
}