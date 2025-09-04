/* Multiplication of two matrices. */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>> mat1= {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 4, 0, 0},
        {0, 2, 6, 0}
    };

    vector<vector<int>> mat2= {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 4, 0, 0},
        {0, 2, 6, 0}
    };

    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int rows2 = mat2.size();
    int cols2 = mat2[0].size();
    
    
    if(cols1 != rows2){
        cout << "multiplication is not possible!!!" << endl;
        return 0;
    }

    vector<vector<int>>sparse1;
        
    for(int i = 0;i<rows1;i++){
        for(int j = 0;j<cols1;j++){
            if(mat1[i][j] != 0){
                sparse1.push_back({i, j, mat1[i][j]});
            
            }
        }
    }

    
    vector<vector<int>>sparse2;
    
    for(int i = 0;i<rows2;i++){
        for(int j = 0;j<cols2;j++){
            if(mat2[i][j] != 0){
                sparse2.push_back({i, j, mat2[i][j]});
            
            }
        }
    }


    vector<vector<int>>result(rows1 , vector<int>(cols2 , 0));
    for(int i  = 0;i< sparse1.size();i++){
        int r1 = sparse1[i][0];
        int c1 = sparse1[i][1];
        int val1 = sparse1[i][2];

        for(int j=0;j<sparse2.size();j++){
            int r2 = sparse2[j][0];
            int c2 = sparse2[j][1];
            int val2 = sparse2[j][2];

            if(c1 == r2){  // Matching column-row for multiplication
                result[r1][c2] += val1 * val2;
            }
        }
    }
    cout << "\nProduct Sparse Form (row col value):\n";
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            if(result[i][j]!=0)
                cout << i << " " << j << " " << result[i][j] << endl;
        }
    }


}