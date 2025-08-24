/*Reverse the elements of an array */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter no. of elemnets: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: \n";
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << "the reverse is: \n";
    for(int i= 0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }

}