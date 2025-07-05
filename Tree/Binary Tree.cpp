#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Tree {
    Node* root;

public:
    Tree() {
        root = NULL;
    }

    void insertNode(int val) {
        Node* newNode = new Node(val);
        if (root == NULL) {
            root = newNode;
            return;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            if (temp->left == NULL) {
                temp->left = newNode;
                return;
            } else {
                q.push(temp->left);
            }

            if (temp->right == NULL) {
                temp->right = newNode;
                return;
            } else {
                q.push(temp->right);
            }
        }
    }

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void display() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    Tree t;
    t.insertNode(1);
    t.insertNode(2);
    t.insertNode(3);
    t.insertNode(4);
    t.insertNode(5);
    t.insertNode(6);
    t.insertNode(7);
    t.display();
}
