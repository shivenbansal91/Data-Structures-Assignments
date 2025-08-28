/* Upper triangular Matrix. */

#include<iostream>
#include<vector>
using namespace std;

vector<int>uppertriangularMatrix(vector<vector<int>> &arr){
    if(arr.size() != arr[0].size()) return {};
    int n = arr.size();
    vector<int>ans;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i<=j){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {0, 5, 6, 7},
        {0, 0, 8, 9},
        {0, 0, 0, 10}
    };
    vector<int>tringolar = uppertriangularMatrix(arr);
    for(int i = 0;i<tringolar.size(); i++){
        cout << tringolar[i] << " ";
    }


}