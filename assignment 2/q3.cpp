/* Given an array of n-1 distinct integers in the range of 1 to n, find the missing number 
in it in a Sorted Array 
(a) Linear time 
(b) Using binary search.*/

#include<iostream>
using namespace std;
int lineartime(int arr[], int n){
    
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = ans ^ (i+1);
        ans = ans ^ arr[i];
    }
    return ans;
}

int binarysearch(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid] == mid+1){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low + 1;
}

int main(){
    int arr[5] = {1,2,3,5};
    int value = lineartime(arr,5);
    cout << value << endl;
    int value2 = binarysearch(arr,5);
    cout << value2 << endl;

}