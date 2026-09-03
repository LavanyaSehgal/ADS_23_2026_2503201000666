#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (front == NULL) {
        front = rear = newNode;
        rear->next = front;
    }
    else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }

    cout << value << " inserted" << endl;
}


void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    if (front == rear) {
        front = rear = NULL;
    }
    else {
        front = front->next;
        rear->next = front;
    }

    cout << temp->data << " deleted" << endl;
    delete temp;
}


void display() {
    if (front == NULL) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = front;

    cout << "Queue: ";

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    enqueue(40);

    display();

    return 0;
}