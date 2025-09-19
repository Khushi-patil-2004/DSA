#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void pushback(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int length() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    int middle() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return -1;
        }

        int count = length();          // step 1: count nodes
        int midIndex = count / 2;      // step 2: find mid index (0-based)

        Node* temp = head;
        for (int i = 0; i < midIndex; i++) {
            temp = temp->next;         // step 3: move to mid
        }

        return temp->data;             // step 4: return mid value
    }
};

int main() {
    LinkedList l;
    l.pushback(1);
    l.pushback(20);
    l.pushback(3);
    l.pushback(40);
    l.pushback(5);
    l.pushback(58);

    l.display();

    cout << "Length of list: " << l.length() << endl;
    cout << "Middle element: " << l.middle() << endl;

    return 0;
}
