/*Write a program to convert a character from uppercase to lowercase.*/
#include<iostream>
using namespace std;


//a = 97
//z = 122
//A = 65
//Z = 90

void to_lower(char st[]){
    int n = 0;
    while(st[n]!='\0'){
        n++;
    }
    for(int i = 0;i<n;i++){
        if(st[i] >= 97 && st[i] <= 122){
            st[i] -= 32;
        }
    }
}
int main(){
    char st[] = "HelloWorld";
    to_lower(st);
    cout << st;

}