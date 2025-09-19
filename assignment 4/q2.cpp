/*Develop a menu driven program demonstrating the following operations on Circular Queues: 
enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek(). */
#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int* arr;
    int front,rear;
    int size;
public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }


    void enqueue(int n){

        if (isFull()) {
            cout << "Queue is full! Cannot enqueue.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = n;
        cout << n << " enqueued.\n";
    }

    void dequeue(){
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue.\n";
            return;
        }
        cout << arr[front] << " dequeued.\n";

        if (front == rear) { // only one element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

};


int main() {
    int n, choice, value;
    cout << "Enter size of circular queue: ";
    cin >> n;

    CircularQueue q(n);

    do {
        cout << "\n--- Circular Queue Menu ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. isEmpty\n5. isFull\n6. Display\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                cout << (q.isEmpty() ? "Queue is empty\n" : "Queue is not empty\n");
                break;
            case 5:
                cout << (q.isFull() ? "Queue is full\n" : "Queue is not full\n");
                break;
            case 6:
                q.display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
    
}