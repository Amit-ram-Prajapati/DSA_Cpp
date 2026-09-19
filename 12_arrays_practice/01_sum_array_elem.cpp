#include<iostream>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int s = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        // sum = sum + arr[i];
        sum += arr[i];
    }
    cout << "Total sum : " << sum;

    return 0;
}