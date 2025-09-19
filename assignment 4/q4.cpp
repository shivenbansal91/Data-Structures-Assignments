/*Write a program to find first non-repeating character in a string using Queue. Sample I/P: a a 
b c Sample O/P: a -1 b b */
#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

void nonrepeating(string s){
    queue<char>q;
    unordered_map<char,int>freq;

    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        q.push(ch);
        freq[ch]++;

        while(!q.empty() && freq[q.front()] > 1){
            q.pop();
        }
        if(q.empty()){
            cout << -1 <<" ";
        }
        else{
            cout << q.front() << " ";
        }
    }
    cout << endl;
}

int main(){
    string s = "aabc";
    nonrepeating(s);

}