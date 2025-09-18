/*Write a program to convert an Infix expression into a Postfix expression. */
#include<iostream>
#include<stack>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;   // higher precedence
    return 0;
}

string toPostfix(string s){
    stack<char>st;
    string postfix = "";
    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        if(isalnum(ch)){
            postfix += ch;
        }
        else if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')'){
            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
        }
        else{
            while(!st.empty() && precedence(st.top()) >= precedence(ch) ){
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main(){
    string infix = "A+B*C";
    string ans = toPostfix(infix);
    cout  << ans;

    return 0;

}