/* Write a program to reverse a string. */
#include<iostream>

using namespace std;

int main(){
    char st[] = "hello";
    int n = 0;
     while(st[n] != '\0'){
        n++;
    }
    for(int i = 0;i<n/2;i++){
        int temp = st[i];
        st[i] = st[n-1-i];
        st[n-i-1] = temp;
    }
    cout << st;
    return 0;
}