#include<iostream>
using namespace std;

int main(){

    float principle_amt = 5000;
    float time_duration = 5;
    float interest_rate = 6;

    float simple_interest = (principle_amt * time_duration * interest_rate) / 100;
    cout << "Simple interest: " << simple_interest << "\n";
    cout << "Total amount to pay :" << simple_interest + principle_amt;

    return 0;

}