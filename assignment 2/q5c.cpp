/*Lower triangular Matrix. */

#include<iostream>
#include<vector>
using namespace std;

vector<int>lowerTriangularMatrix(vector<vector<int>> &arr){
    if(arr.size() != arr[0].size()) return {};
    int n = arr.size();
    vector<int>ans;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i>=j){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;

}

int main(){
    vector<vector<int>>arr = {
        {1,0,0,0}, 
        {2,3,0,0},
        {4,5,6,0}, 
        {7,8,9,10}
    };
    vector<int> trigonal = lowerTriangularMatrix(arr);
    for(int i = 0;i<trigonal.size(); i++){
        cout << trigonal[i] << " ";
    }
}