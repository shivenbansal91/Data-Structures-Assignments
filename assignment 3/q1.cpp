/*
Develop a menu driven program demonstrating the following operations on a Stack using array: 

(i) push(),  (ii) pop(),  (iii) isEmpty(),  (iv) isFull(),  (v) display(), and  (vi) peek(). 

*/

#include<iostream>
#include<vector>
using namespace std;
int MAX = 5;

void push(vector<int>&arr,int n){
    arr.push_back(n);
}

void pop(vector<int>&arr){
    arr.pop_back();
}
bool isEmpty(vector<int>&arr){
    return arr.empty();
    
}
bool isfull(vector<int>&arr){
    return (arr.size() == ::MAX);
}

void display(vector<int>&arr){
    int n = arr.size();
    for(int i = n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void peek(vector<int>&arr){
    cout << arr.back() << endl;
}


int main(){
    vector<int>arr;
    int choice , value;
    do{
    cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    switch (choice)
    {
    case 1 :
        cout << "enter value to push" << endl;
        cin >> value;
        push(arr , value);
        break;
    case 2:
        pop(arr);
        break;
    case 3: 
        cout << isEmpty(arr);
        break;
    case 4:
        cout << isfull(arr);
        break;
    case 5: 
        display(arr);
        break;
    
    case 6:
        peek(arr);
        break;
    case 0:
        break;
    default:
        break;
    }
    
    }while(choice != 0);

    return 0;
}