#include <iostream>
using namespace std;

int* dmArr()
{
    cout << "Enter the size of arr : ";
    int size;
    cin >> size;

    int *ptr = new int[size];
    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        x++;
    }
    
    cout << ptr << "\n";
    // cout << ptr + 1 << "\n";
    delete [] ptr ;

    // int *ptr = new int;
    // *ptr = 10;
    // delete ptr ;
    return ptr;
}

int main()
{

    // int arr[100] = {10,20};
    // cout << arr[0] << "\n";
    // cout << arr[1] << "\n";

    int *x = dmArr();
    cout << *x << "\n";

    return 0;
}