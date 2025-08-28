/* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping 
the adjacent elements if they are in wrong order. Code the Bubble sort with the 
following elements: 64 34 25 12 22 11 90 */

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {2,4,5,3,1};

    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}