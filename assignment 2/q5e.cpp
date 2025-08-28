/* Symmetric Matrix */
#include<iostream>
#include<vector>
using namespace std;

vector<int> symmetricMatrix(vector<vector<int>> arr){
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
    vector<vector<int>> mat = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    vector<int>symmetric = symmetricMatrix(mat);
    for(int i = 0;i<symmetric.size(); i++){
        cout << symmetric[i] << " ";
    }

}