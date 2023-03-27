#include <iostream>

using namespace std;


class Node {
public:
    int data;
    Node *next;
};

class Queue {
public:
    Node *front;
    Node *rear;
    int size;
public:
    Queue() {
        front = rear = NULL;
        size = 0;
    }

    void enqueue(int data) {
        Node *node = new Node();
        node->data = data;
        node->next = NULL;

        if (rear != NULL) {
            rear->next = node;
        }
        rear = node;

        if (front == NULL)
            front = node;

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "\nQueue is empty";
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        size--;
        if (front == NULL) {
            rear = NULL;
        }
    }

    int top() {
        if (isEmpty()) {
            cout << "Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << "Queue size: " << q.getSize();
    cout << "\nTop element: " << q.top() << endl;

    q.dequeue();

    cout << "\nQueue size: " << q.getSize();
    cout << "\nTop element: " << q.top() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "\nQueue size: " << q.getSize();

    q.dequeue();
    return 0;
}
