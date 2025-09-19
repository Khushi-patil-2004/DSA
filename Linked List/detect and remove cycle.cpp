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

    Node* detectCycle() {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;        
            fast = fast->next->next;   
            if (slow == fast) { 
                // Find start of cycle
                slow = head;
                Node*prev = NULL;
                while (slow != fast) {
                    slow = slow->next;
                    prev = fast;
                    fast = fast->next;
                }
                prev->next = NULL; // remove cycle
                return slow; // start of cycle
            }
        }
        return nullptr; // no cycle
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

   
    l.head->next->next->next->next->next->next = l.head->next;

    Node* cycleNode = l.detectCycle();
    if (cycleNode != nullptr) {
        cout << "Cycle detected! Starts at node with value: " << cycleNode->data << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }
    l.display();
    return 0;
}
