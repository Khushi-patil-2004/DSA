#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void isEmpty() {
        if (top == NULL)
            cout << "Stack is empty." << endl;
        else
            cout << "Stack is not empty." << endl;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << val << " pushed to stack." << endl;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow. Cannot pop." << endl;
            return;
        }
        cout << top->data << " popped from stack." << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
};

int main() {
    Stack s;
    s.isEmpty();    
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.isEmpty();     
    return 0;
}
