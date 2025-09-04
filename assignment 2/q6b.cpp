/*b) Addition of two matrices. */
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> mat1= {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 4, 0, 0},
        {0, 2, 6, 0}
    };
    int n1 = mat1.size();
    vector<vector<int>>sparse1;
    
    for(int i = 0;i<n1;i++){
        for(int j = 0;j<n1;j++){
            if(mat1[i][j] != 0){
                sparse1.push_back({i, j, mat1[i][j]});
            
            }
        }
    }






    vector<vector<int>> mat2= {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 4, 0, 0},
        {0, 2, 6, 0}
    };
    int n2 = mat2.size();
    vector<vector<int>>sparse2;
    
    for(int i = 0;i<n2;i++){
        for(int j = 0;j<n2;j++){
            if(mat2[i][j] != 0){
                sparse2.push_back({i, j, mat2[i][j]});
            
            }
        }
    }

    map<pair<int,int>, int> summat;
    for(int i = 0;i<sparse1.size();i++){
    
            summat[{sparse1[i][0],sparse1[i][1]}] += sparse1[i][2];
        }

    for(int i = 0;i<sparse2.size();i++){
    
            summat[{sparse2[i][0],sparse2[i][1]}] += sparse2[i][2];
        }





    cout << "Sum of Sparse Matrices (row col value):\n";
    for(auto &entry : summat) {
        cout << entry.first.first << " "
             << entry.first.second << " "
             << entry.second << endl;
    }




}