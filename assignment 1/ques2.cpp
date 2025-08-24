/*Design the logic to remove the duplicate elements from an Array and after the 
deletion the array should contain the unique elements.*/

#include<iostream>
using namespace std;

void create(int arr[] , int n){
    cout << "enter elements" << endl;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
}


void del(int arr[], int n, int pos){
    for(int i = pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }

}

int main(){
    int n;
    cout << "enter no. of elements: ";
    cin >> n;
    int arr[n];
    create(arr,n);

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                del(arr,n,j);
                n--;
                j--;
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}