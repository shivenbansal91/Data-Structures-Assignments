/* Write a program to count the total number of distinct elements in an array of length 
n.*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    sort(arr.begin(), arr.end());
    int cnt = 1;
    int  n = arr.size();
    if(n == 0){
        cnt = 0;
        cout << "As the no. of elements in arr is '0' so the no. of distinct elements is:" << cnt << endl;
        return 0;
    }
    for(int i = 1;i<n;i++){
        if(arr[i] != arr[i-1]){
            cnt++;
        }
    }
    cout << "The no. of distinct elements are: " << cnt;

}
