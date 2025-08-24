/*Write a program to find sum of every row and every column in a two-dimensional 
array.  */

#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout << "enter no. of rows: ";
    cin >> n;
    cout << "enter no. of coloumns: ";
    cin  >> m;


    int arr[n][m];
    cout << "enter elements: \n";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0;i<n;i++){
        int row_sum = 0;
        for(int j= 0;j<m;j++){
            row_sum += arr[i][j];
        }
        cout << "row " << i+1 << " sum is: " << row_sum << endl;
    }
    cout << endl;
    for(int i = 0;i<m;i++){
        int col_sum = 0;
        for(int j = 0;j<n;j++){
            col_sum += arr[j][i];
        }
        cout << "coloumn " << i+1 << " sum is: " << col_sum << endl;
    }
}
