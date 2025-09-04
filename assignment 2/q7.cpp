/*) Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an 
inversion if these numbers are out of order, i.e., i < j but A[i]>A[j ]. Write a program to 
count the number of inversions in an array.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> A = {2, 4, 1, 3, 5};
     int n = A.size();
     int cnt = 0;
     for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(A[i] > A[j]){
                cnt++;
            }
        }
     }
     cout << cnt;
} 