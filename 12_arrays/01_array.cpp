#include <iostream>
using namespace std;

int main()
{
    // In cpp , Array is a collection of same data type
    
    // Creation of Array
    int marks[50];
    // It will output garbage values
    cout << marks[0] << "\n";
    cout << marks[1] << "\n";
    cout << marks[2] << "\n";
    cout << marks[50] << "\n";
    
    int position[40] = {1, 2, 3};
    cout << position[0] << "\n";
    cout << position[1] << "\n";
    cout << position[5] << "\n"; // 0
    
    int nums[] = {1, 2, 3};
    cout << nums[0] << "\n";
    cout << nums[2] << "\n";
    cout << nums[9] << "\n"; // 0

    // features 
    // 1. Indexed ==> easy access through index 
    // 2. stores same data type 
    // 3. Linear data structure
    // 4. Contiguous in memory ==> 100, 104,108,112(int) 

    return 0;
}