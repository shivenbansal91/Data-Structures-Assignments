/* Write a program to sort the strings in alphabetical order.*/
#include<iostream>
using namespace std;

int main(){
    char st[] = "hello";
    int n = 0;
    while(st[n]!='\0'){
        n++;
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(st[j] > st[j+1]){
                int temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }
    cout << st;
}