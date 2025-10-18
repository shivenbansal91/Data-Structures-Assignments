/*1. Develop a menu driven program for the following operations of on a Circular as well 
as a Doubly Linked List. 
(a) Insertion anywhere in the linked list (As a first node, as a last node, and 
after/before a specific node). 
(b) Deletion of a specific node, say 'Delete Node 60'. That mean the node to be 
deleted may appear as a head node, last node or a node in between. 
(c) Search for a node.*/

#include <bits/stdc++.h>
using namespace std;

class DLL{
    public:
    int data;
    DLL* next;
    DLL* back;
    
    DLL(int value, DLL* n, DLL* p){
        data = value;
        next = n;
        back = p;
    }
    DLL(int value){
        data = value;
        next = nullptr;
        back = nullptr;
    }
};


class CLL{
    public:
    int data;
    CLL* next;
    CLL(int value){
        data = value;
        next = nullptr;
    }
};



class DoublyLinkedList {
private:
    DLL* head;

public:
    DoublyLinkedList() { head = nullptr; }

    void insertAtBeginning(int val) {
        DLL* newNode = new DLL(val);
        if (head != nullptr) {
            newNode->next = head;
            head->back = newNode;
        }
        head = newNode;
    }

    void insertAtEnd(int val) {
        DLL* newNode = new DLL(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        DLL* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
        newNode->back = temp;
    }

    void insertAfter(int key, int val) {
        DLL* temp = head;
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp) {
            cout << "Node " << key << " not found.\n";
            return;
        }
        DLL* newNode = new DLL(val);
        newNode->next = temp->next;
        newNode->back = temp;
        if (temp->next)
            temp->next->back = newNode;
        temp->next = newNode;
    }

    void insertBefore(int key, int val) {
        if (!head) return;
        if (head->data == key) {
            insertAtBeginning(val);
            return;
        }
        DLL* temp = head;
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp) {
            cout << "Node " << key << " not found.\n";
            return;
        }
        DLL* newNode = new DLL(val);
        newNode->next = temp;
        newNode->back = temp->back;
        temp->back->next = newNode;
        temp->back = newNode;
    }

    void deleteNode(int key) {
        if (!head) return;
        DLL* temp = head;
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp) {
            cout << "Node " << key << " not found.\n";
            return;
        }

        if (temp == head)
            head = temp->next;
        if (temp->next)
            temp->next->back = temp->back;
        if (temp->back)
            temp->back->next = temp->next;

        delete temp;
        cout << "Node " << key << " deleted.\n";
    }

    void search(int key) {
        DLL* temp = head;
        while (temp) {
            if (temp->data == key) {
                cout << "Node " << key << " found.\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Node " << key << " not found.\n";
    }

    void display() {
        DLL* temp = head;
        cout << "Doubly Linked List: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class CircularLinkedList {
private:
    CLL* head;

public:
    CircularLinkedList() { head = nullptr; }

    void insertAtBeginning(int val) {
        CLL* newNode = new CLL(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            CLL* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int val) {
        CLL* newNode = new CLL(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
            return;
        }
        CLL* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }

    void insertAfter(int key, int val) {
        if (!head) return;
        CLL* temp = head;
        do {
            if (temp->data == key) {
                CLL* newNode = new CLL(val);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Node " << key << " not found.\n";
    }

    void deleteNode(int key) {
        if (!head) return;
        CLL *curr = head, *prev = nullptr;

        if (head->data == key) {
            CLL* temp = head;
            while (temp->next != head)
                temp = temp->next;
            if (head->next == head) {
                delete head;
                head = nullptr;
                return;
            }
            temp->next = head->next;
            delete head;
            head = temp->next;
            cout << "Node " << key << " deleted.\n";
            return;
        }

        do {
            prev = curr;
            curr = curr->next;
            if (curr->data == key) {
                prev->next = curr->next;
                delete curr;
                cout << "Node " << key << " deleted.\n";
                return;
            }
        } while (curr != head);
        cout << "Node " << key << " not found.\n";
    }

    void search(int key) {
        if (!head) return;
        CLL* temp = head;
        do {
            if (temp->data == key) {
                cout << "Node " << key << " found.\n";
                return;
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Node " << key << " not found.\n";
    }

    void display() {
        if (!head) {
            cout << "Circular Linked List is empty.\n";
            return;
        }
        CLL* temp = head;
        cout << "Circular Linked List: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main(){

    DoublyLinkedList dll;
    CircularLinkedList cll;
    int mainChoice, choice, val, key;

    do {
        cout << "\n========= MAIN MENU =========\n";
        cout << "1. Doubly Linked List\n";
        cout << "2. Circular Linked List\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1 || mainChoice == 2) {
            cout << "\n1. Insert at Beginning\n";
            cout << "2. Insert at End\n";
            cout << "3. Insert After a Node\n";
            if (mainChoice == 1)
                cout << "4. Insert Before a Node\n";
            cout << "5. Delete a Node\n";
            cout << "6. Search for a Node\n";
            cout << "7. Display List\n";
            cout << "8. Back\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter value: ";
                    cin >> val;
                    (mainChoice == 1) ? dll.insertAtBeginning(val) : cll.insertAtBeginning(val);
                    break;
                case 2:
                    cout << "Enter value: ";
                    cin >> val;
                    (mainChoice == 1) ? dll.insertAtEnd(val) : cll.insertAtEnd(val);
                    break;
                case 3:
                    cout << "Enter key and value: ";
                    cin >> key >> val;
                    (mainChoice == 1) ? dll.insertAfter(key, val) : cll.insertAfter(key, val);
                    break;
                case 4:
                    if (mainChoice == 1) {
                        cout << "Enter key and value: ";
                        cin >> key >> val;
                        dll.insertBefore(key, val);
                    } else
                        cout << "Invalid for Circular Linked List!\n";
                    break;
                case 5:
                    cout << "Enter key to delete: ";
                    cin >> key;
                    (mainChoice == 1) ? dll.deleteNode(key) : cll.deleteNode(key);
                    break;
                case 6:
                    cout << "Enter key to search: ";
                    cin >> key;
                    (mainChoice == 1) ? dll.search(key) : cll.search(key);
                    break;
                case 7:
                    (mainChoice == 1) ? dll.display() : cll.display();
                    break;
                case 8:
                    break;
                default:
                    cout << "Invalid choice!\n";
            }
        }
    } while (mainChoice != 3);

    cout << "Program terminated.\n";
    return 0;
    
}