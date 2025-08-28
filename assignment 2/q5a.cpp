/*Diagonal Matrix. */
#include<iostream>
#include<vector>
using namespace std;

vector<int> diagonal_matrix(vector<vector<int>>&arr){
    if(arr.size() != arr[0].size()) return {};
    vector<int>ans;
    for(int i = 0;i<arr.size(); i++){
        for(int j = 0;j<arr[0].size();j++){
            if(i == j){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> mat = { 
        {1, 4, 0},
        {1, 3, 2},
        {0, 2, 2} 
    };
    vector<int>diagonal = diagonal_matrix(mat);
    for(int i = 0;i<diagonal.size();i++){
        cout << diagonal[i] << " ";
    }

    


    return 0;
}