/*6) Write a program to implement the following operations on a Sparse Matrix, 
assuming the matrix is represen*/
/*Transpose of a matrix. */
#include<bits/stdc++.h>
using namespace std;

int main(){

vector<vector<int>> mat= {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 4, 0, 0},
        {0, 2, 6, 0}
    };
    int n = mat.size();
    vector<vector<int>>sparse;
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(mat[i][j] != 0){
                sparse.push_back({i, j, mat[i][j]});
            
            }
        }
    }

    for(int i = 0;i<sparse.size();i++){
        
            cout << sparse[i][0] << " | " << sparse[i][1] << " | " << sparse[i][2] << endl;
    }

    for(int i = 0;i<sparse.size();i++){
        
            swap(sparse[i][0] , sparse[i][1]);
    }

    cout << endl;
    for(int i = 0;i<sparse.size();i++){
        
            cout << sparse[i][0] << " | " << sparse[i][1] << " | " << sparse[i][2] << endl;
    }
}