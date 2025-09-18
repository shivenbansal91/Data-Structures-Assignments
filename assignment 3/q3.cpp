/*. Write a program that checks if an expression has balanced parentheses. */

#include<iostream>
#include<stack>
using namespace std;

void balanced(string s){
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        if( s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if (st.empty()) {   // No opening bracket to match
                cout << "Not balanced\n";
                return;
            }
            
            if((st.top() =='(' && s[i] == ')')  || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}')){
                st.pop();
            }
            else{
                cout << "not balanced" << endl;
                return;
            }
        }
    }
    if (st.empty()) {
        cout << "Balanced\n";
    } else {
        cout << "Not balanced\n";
    }
    return;
}

int main(){
    string s = "(({[(]}))";
    balanced(s);

    return 0;
}