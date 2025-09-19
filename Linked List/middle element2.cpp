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

int middle()
{
if (head == nullptr) {
            cout << "List is empty!" << endl;
            return -1;
}
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
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
 cout << "Middle element: " << l.middle() << endl;

    return 0;
}
