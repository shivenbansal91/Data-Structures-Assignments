/*5. Write a program for the evaluation of a Postfix expression. */
#include<bits/stdc++.h>
using namespace std;

int evaluate(string s){
    stack<int>st;
    int ans = 0;
    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        
        if(isalnum(ch)){
            st.push(ch - '0');
        }
        else{
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            switch (ch){
                case '+':
                    st.push(a+b);
                    break;
                case '-':
                    st.push(a-b);
                    break;
                case '/':
                    st.push(a/b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                default:
                    break;
            }
        }
    }
    return st.top();
}

int main(){
    string s = "53+82-*";
    int ans = evaluate(s);
    cout << ans;

    return 0;
}