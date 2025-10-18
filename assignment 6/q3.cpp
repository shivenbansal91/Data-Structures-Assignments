/*Write a program to find size of 
i. Doubly Linked List.  
ii. Circular Linked List. */

#include<bits/stdc++.h>
using namespace std;

class DLL{
public:
    int data;
    DLL* next;
    DLL*back;
    DLL(int val){
        data = val;
        next = nullptr;
        back = nullptr;
    }
};
class CLL{
public:
    int data;
    CLL* next;
    CLL(int val){
        data = val;
        next = nullptr;
    }
};

DLL* dllinsert(DLL* head , int val){
        DLL* newNode = new DLL(val);
        if (head == nullptr) {
            head = newNode;
            return head;
        }
        DLL* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->back = temp;
        return head;
}

CLL* insert(CLL* head, int val){
    CLL* newNode = new CLL(val);
    if(head == NULL){
        head = newNode;
        head->next = head;
        return head;
    }
    CLL* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;

}
int DLLsize(DLL* head){
    if(head == NULL){
        return 0;
    }
    int count = 0;
    DLL* temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int CLLsize(CLL* head){
    if(head == NULL) return 0;
    int count = 0;
    CLL* temp = head;
    do{
        count++;
        temp = temp->next;
    }while(temp != head);
    return count;
}

int main(){
    DLL* head1 = nullptr;
    head1 = dllinsert(head1, 20);
    head1 = dllinsert(head1, 30);
    head1 = dllinsert(head1, 40);
    head1 = dllinsert(head1, 50);   
    head1 = dllinsert(head1, 60);
    int n1 = DLLsize(head1);
    cout << n1 << endl;

    CLL* head2 = nullptr;
    head2 = insert(head2, 20);
    head2 = insert(head2, 30);
    head2 = insert(head2, 40);
    head2 = insert(head2, 50);   
    int n2 = CLLsize(head2);
    cout << n2 << endl;

    

}