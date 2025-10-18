#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node* prev;

    Node(char val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node* insert(Node* head,char val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return head;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
        return head;
}

bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    Node* start = head;
    Node* end = head;

    
    while (end->next != nullptr)
        end = end->next;

    while (start != end && end->next != start) {
        if (start->data != end->data)
            return false;
        start = start->next;
        end = end->prev;
    }

    return true;
}

int main(){
    Node* head = nullptr;
    head = insert(head, 'L');
    head = insert(head, 'E');
    head = insert(head, 'V');
    head = insert(head, 'E');
    head = insert(head, 'L');
    cout << isPalindrome(head) << endl;
}