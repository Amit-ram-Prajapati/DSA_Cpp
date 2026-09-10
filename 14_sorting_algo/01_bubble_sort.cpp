#include<iostream>
using namespace std;

void swap(int arr[], int a , int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubble_sort(int arr[],int n){
    for (int pass = 0; pass < n; pass++)
    {
        for (int j  = 1; j < n - pass ; j++)
        {
            if(arr[j - 1 ] > arr[j]){
                swap(arr, j, (j - 1));
            }
        }
        
    }
    
}
int main(){

    int nums[] = {4,50, 10, 40, 20, 30};
    int n = sizeof(nums)/sizeof(nums[0]);
    bubble_sort(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}