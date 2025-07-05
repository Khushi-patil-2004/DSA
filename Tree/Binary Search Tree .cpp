#include<iostream>
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

    Node* buildtree(Node* root, int val) {
        if (root == NULL) {
            return new Node(val);
        }
        if (val < root->data) {
            root->left = buildtree(root->left, val);
        } else {
            root->right = buildtree(root->right, val);
        }
        return root;
    }

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    Tree() {
        root = NULL;
    }

    void insertNode(int val) {
        root = buildtree(root, val);
    }

    void display() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << endl;
    }
};

int main() {
    Tree t;
    t.insertNode(50);
    t.insertNode(30);
    t.insertNode(70);
    t.insertNode(20);
    t.insertNode(40);
    t.insertNode(60);
    t.insertNode(80);
    t.display();
}
