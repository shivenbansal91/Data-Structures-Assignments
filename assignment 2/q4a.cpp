/* Write a program to concatenate one string to another string. */
#include<iostream>
using namespace std;

int main(){
    char s1[50] = "hello ";
    char s2[] = "world";
    int len1 = 0,len2 = 0;
    while(s1[len1] != '\0'){
        len1++;
    }
    while(s2[len2] != '\0'){
        len2++;
    }

    for(int i = len1;i<len1+len2;i++){
        s1[i] = s2[i-len1];
    }
    s1[len1 + len2] = '\0';
    cout << s1;
    return 0;
}