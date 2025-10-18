/*Display all the node values in a circular linked list, repeating value of head node at the 
end too.  20 → 100 → 40 → 80 → 60,*/

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

int main(){
    Node* head = nullptr;
    head = insert(head, 20);
    head = insert(head, 100);
    head = insert(head, 40);
    head = insert(head, 80);
    head = insert(head, 60);
    Node* temp = head;
    do{
        cout<< temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    cout << temp->data;


}