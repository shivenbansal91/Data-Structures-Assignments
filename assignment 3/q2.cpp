/*Given a string, reverse it using STACK. For example “DataStructure” should be output as 
“erutcurtSataD.”*/

#include<iostream>
#include<stack>
using namespace std;


int main(){
    string  s = "DataStructure";
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        st.push(s[i]);
    }

    string s2;
    while(!st.empty()){
        s2.push_back(st.top());
        st.pop();
    }
    cout << s2;
}