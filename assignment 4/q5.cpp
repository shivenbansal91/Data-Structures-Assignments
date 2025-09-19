/*Write a program to implement a stack using (a) Two queues and (b) One Queue.*/
#include<bits/stdc++.h>
using namespace std;

class Stack2Queue{
queue<int>q1,q2;
public:
    void Push(int x){
        q1.push(x);
    }

    void Pop(){
        if(q1.empty()){
            cout << "Stack Underflow\n";
        }

        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        cout << "popped: " << q1.front() << endl;
        q1.pop();

        swap(q1,q2);
    }
    void Top(){
        if(q1.empty()){
            cout << "Stack Underflow\n";
        }

        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        cout << "top: " << q1.front() << endl;
        q2.push(q1.front());
        q1.pop();

        swap(q1,q2);
    }
    bool Empty(){
        return q1.empty();
    }

};


class Stack1Queue{
queue<int>q;
public:
    void Push(int x){
        int n = q.size();
        q.push(x);

        for(int i = 0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }

    void Pop(){
        if(q.empty()){
            cout << "Stack Underflow\n";
        }
        cout << "popped: " << q.front()<< endl;
        q.pop();
    }

    void top() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top: " << q.front() << endl;
    }

    bool Empty(){
        return q.empty();
    }

};

int main(){
    cout << "stack using 2 queues: \n";
    Stack2Queue s1;
    s1.Push(2);
    s1.Push(10);
    s1.Push(20);
    s1.Top();
    s1.Pop();
    s1.Top();


    cout << "stack using 1 queue: \n";
    Stack1Queue s2;
    s1.Push(2);
    s1.Push(10);
    s1.Push(20);
    s1.Top();
    s1.Pop();
    s1.Top();
    return 0;
}