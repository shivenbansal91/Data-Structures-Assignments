/*) Develop a Menu driven program to demonstrate the following operations of Arrays 
——MENU——- 
1.CREATE 
2. DISPLAY 
3. INSERT 
4. DELETE 
5. LINEAR SEARCH 
6. EXIT */
#include<iostream>
using namespace std;

void create(int arr[] , int n){
    cout << "enter elements" << endl;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
}

void display(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void insert(int arr[], int n , int ele, int pos){
   
    for(int i = n;i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = ele;


}

void del(int arr[], int n, int pos){
    for(int i = pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }

}

void linear_Search(int arr[], int n, int ele){
    for(int i = 0;i<n;i++){
        if(arr[i] == ele){
            cout << "found " << ele << " at the position: " << i;
            break;
        }
    }
}

void ex(){
    exit(0);
}
 
int main(){
    int n;
    cout << "enter the no. of elements of the array: ";
    cin >> n;

    int arr[n];
    create(arr,n);
    int choice;

    while(true){
        cout << "\nenter the func you want to perform: "<< endl;
        cout << "\n1. DISPLAY\n" << "2. INSERT\n" <<  "3. DELETE\n" <<  "4. LINEAR SEARCH\n" <<  "5. EXIT" << endl;
        cin >> choice;

        int ele,pos;
        switch (choice)
        {
        case 1:
            display(arr , n);
            break;
        case 2:
            
            cout << "enter ele: ";
            cin >> ele;
            cout << "enter pos: ";
            cin >> pos;
            insert(arr , n , ele , pos);
            n++;
            display(arr,n);
            break;
        case 3:
            
            cout << "enter pos: ";
            cin >> pos;
            del(arr , n , pos);
            n--;
            display(arr,n);
            break;
        case 4:
            cout << "enter ele: ";
            cin >> ele;
            linear_Search(arr , n , ele);
            break;
        case 5:
            cout << "exiting program.....";
            ex();
            break;

        default:
            break;
        }}
}