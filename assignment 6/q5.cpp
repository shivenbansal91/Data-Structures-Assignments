/*Write a program to check if a linked list is Circular Linked List or not. */
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* insert(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        head->next = head;
        return head;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;

}

bool isCircular(Node* head) {
    if (head == nullptr) return false;

    Node* temp = head->next;
    while (temp != nullptr && temp != head)
        temp = temp->next;

    return (temp == head);
}

int main(){
    Node* head = nullptr;
    head = insert(head,10);
    head = insert(head,20);
    head = insert(head,30);
    head = insert(head,40);
    head = insert(head,50);
    cout << isCircular(head) << endl;
}