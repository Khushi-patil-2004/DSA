#include<iostream>
using namespace std;
class Node {
public:
    char data;
    Node* next;

    Node(char val) {
        data = val;
        next = NULL;
    }
};
class Stack {
private:
    Node* topNode;
public:
    Stack() {
        topNode = NULL;
    }

    void push(char val) {
        Node* newNode = new Node(val);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop() {
        if (topNode != NULL) {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    char top() {
        if (topNode != NULL) {
            return topNode->data;
        }
        return '\0'; 
    }

    bool empty() {
        return topNode == NULL;
    }
};
bool isValidParentheses(string expr) {
    Stack s;
    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}
int main() {
    string expr = "{[()]}";
    if (isValidParentheses(expr)) {
        cout << "Valid Parentheses" << endl;
    } else {
        cout << "Invalid Parentheses" << endl;
    }
    return 0;
}
