/*Find the matrix multiplication */
#include<iostream>
using namespace std;
int main(){
    int n1 ,m1;
    cout << "enter no. of rows for arr 1: ";
    cin >> n1;
    cout << "enter no. of coloumnsfor arr 1: ";
    cin >> m1;

    int arr1[n1][m1];

    cout << "enter the elements of first matrix: \n";
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m1;j++){
            cin >> arr1[i][j];
        }
    }


    cout << "arr1: \n";
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m1;j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }



    int n2 ,m2;
    cout << "enter no. of rows for arr 2: ";
    cin >> n2;
    cout << "enter no. of coloumnsfor arr 2: ";
    cin >> m2;

    int arr2[n2][m2];

    cout << "enter the elements of second matrix: \n";
    for(int i = 0;i<n2;i++){
        for(int j = 0;j<m2;j++){
            cin >> arr2[i][j];
        }
    };

    cout << "arr2: \n";
    for(int i = 0;i<n2;i++){
        for(int j = 0;j<m2;j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }





    int arr3[n1][m2];

    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m2;j++){
            arr3[i][j] = 0;
            for(int k = 0;k<m1;k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    
    cout << "the matrix multiplication is: \n";

    for(int i = 0;i<n1;i++){
        for(int j = 0;j<m2;j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    

    

}