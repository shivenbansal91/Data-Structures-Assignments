/*Write a program to delete all the vowels from the string. */
#include<iostream>
using namespace std;
bool isVowel(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    return false;
}

int main(){
    char word[] = "hello";
    int n = 0;
    while(word[n] != '\0'){
        n++;
    }
    int k = 0;
    for(int i = 0;i<n;i++){
        if(!isVowel(word[i])){
            word[k++] = word[i];
        }
    }
    word[k] = '\0';
    cout << word;

}