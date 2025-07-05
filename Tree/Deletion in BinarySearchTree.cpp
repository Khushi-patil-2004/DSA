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
        if (root == NULL) return new Node(val);
        if (val < root->data)
            root->left = buildtree(root->left, val);
        else
            root->right = buildtree(root->right, val);
        return root;
    }

    void inorder(Node* node) {
        if (node == NULL) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    Node* findMin(Node* node) {
        while (node->left != NULL)
            node = node->left;
        return node;
    }

    Node* deleteNode(Node* root, int key) {
        if (root == NULL) return root;

        if (key < root->data) {
            root->left = deleteNode(root->left, key);
        }
        else if (key > root->data) {
            root->right = deleteNode(root->right, key);
        }
        else {
            // Case 1: No child
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            // Case 2: One child
            else if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            // Case 3: Two children
            Node* temp = findMin(root->right); 
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

public:
    Tree() {
        root = NULL;
    }

    void insertNode(int val) {
        root = buildtree(root, val);
    }

    void deleteValue(int val) {
        root = deleteNode(root, val);
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

    cout << "Before deletion:\n";
    t.display();

    cout << "After deletion:\n";
    t.deleteValue(20);
    t.deleteValue(30);
    t.deleteValue(50);
    t.display();
  return 0;
}
