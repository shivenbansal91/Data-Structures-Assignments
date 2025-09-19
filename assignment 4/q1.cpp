/*
1.) Develop a menu driven program demonstrating the following operations on simple Queues: 
        enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().
*/

#include<iostream>
#include<vector>
using namespace std;
int MAX = 5;

void Enqueue(vector<int>&arr,int n){
    arr.push_back(n);
}

void Dequeue(vector<int>&arr){
    if(arr.empty()){
        cout << "Queue is empty!\n";
        return;
    }
    arr.erase(arr.begin());
}

bool isEmpty(vector<int>&arr){
    return arr.empty();
    
}
bool isfull(vector<int>&arr){
    return (arr.size() == ::MAX);
}

void display(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void peek(vector<int>&arr){
    if(arr.empty()){
        cout << "Queue is empty!\n";
        return;
    }
    cout << arr.front() << endl;
}


int main(){
    vector<int>arr;
    int choice , value;
    do{
    cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

    switch (choice)
    {
    case 1 :
        cout << "enter value to push" << endl;
        cin >> value;
        Enqueue(arr , value);
        break;
    case 2:
        Dequeue(arr);
        break;
    case 3:
        peek(arr);
        break;
    case 4: 
        cout << isEmpty(arr);
        break;
    case 5:
        cout << isfull(arr);
        break;
    case 6: 
        display(arr);
        break;
    case 0:
        break;
    default:
        break;
    }
    
    }while(choice != 0);

    return 0;
}