/* Tri-diagonal Matrix. */
#include<iostream>
#include<vector>
using namespace std;

vector<int> triDiagonalMatrix(vector<vector<int>> &arr){
    if(arr.size() != arr[0].size()) return {};
    vector<int>ans;
    int n = arr.size();
    for(int i = 1;i<n;i++){
        ans.push_back(arr[i][i-1]);
    }
    for(int i = 0;i<n;i++){
        ans.push_back(arr[i][i]);
    }
    for(int i = 0;i<n-1;i++){
        ans.push_back(arr[i][i+1]);
    }
    return ans;
}

int main(){
    vector<vector<int>>arr = {
        {1, 4, 0, 0, 0},
        {1, 3, 2, 0, 0},
        {0, 2, 2, 1, 0},
        {0, 0, 1, 5, 9},
        {0, 0, 0, 6, 1}
    };
    vector<int>tridiagonal = triDiagonalMatrix(arr);
    for(int i = 0;i<tridiagonal.size();i++){
        cout << tridiagonal[i]<< " ";
    }
    return 0;
}