/*Write a program interleave the first half of the queue with second half. 
Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9 */

#include<bits/stdc++.h>
using namespace std;


void interleaveQueue(queue<int>& q) {
    if (q.empty()) return;

    int n = q.size();
    if (n % 2 != 0) {
        cout << "Queue size must be even for perfect interleave.\n";
        return;
    }

    stack<int> st;
    int half = n / 2;

    // Step 1: Push first half into stack
    for (int i = 0; i < half; i++) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back the stack elements (reverses first half)
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // Step 3: Move the first half elements (original second half) to back
    for (int i = 0; i < half; i++) {
        q.push(q.front());
        q.pop();
    }

    // Step 4: Push first half into stack again
    for (int i = 0; i < half; i++) {
        st.push(q.front());
        q.pop();
    }

    // Step 5: Interleave stack and queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;

    // Sample input: 4 7 11 20 5 9
    q.push(4);
    q.push(7);
    q.push(11);
    q.push(20);
    q.push(5);
    q.push(9);

    interleaveQueue(q);

    cout << "Interleaved queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}