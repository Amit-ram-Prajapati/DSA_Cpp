#include<iostream>
using namespace std;

int main (){

    float PI = 3.145;
    int radius;
    cout << "Enter radius of circle : ";
    cin >> radius;

    float circle_area = PI * radius * radius;
    cout << "Area of circle is : " << circle_area;
    return 0;
}