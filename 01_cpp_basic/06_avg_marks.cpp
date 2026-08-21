#include <iostream>
using namespace std;

int main() {
    int sci;
    int math;
    int eng;

    cout << "Enter Your science marks : ";
    cin >> sci;
    cout << "Enter Your math marks : ";
    cin >> math;
    cout << "Enter Your eng marks : ";
    cin >> eng;

    int avg = (sci + math + eng) / 3;
    cout << "You are average marks is : " << avg;

    return 0;
}