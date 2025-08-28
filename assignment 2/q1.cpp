/*Implement the Binary search algorithm regarded as a fast search algorithm with 
run-time complexity of Ο(log n) in comparison to the Linear Search. */
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int k;
    cout << "enter the element to find: ";
    cin >> k;
    int low = 0;
    int high = n-1;
    bool find = false;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid] == k){
            cout << "the elements is found at index: " << mid << endl;
            find = true;
            break;
        }
        else if(arr[mid] < k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(find == false){
        cout <<"Element not found";
    }

}