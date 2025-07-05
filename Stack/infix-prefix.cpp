#include<iostream>
#include<algorithm>
#include<cctype>
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
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(char val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (isEmpty()) {
            return '\0';
        }
        Node* temp = top;
        char val = temp->data;
        top = top->next;
        delete temp;
        return val;
    }

    char peek() {
        if (isEmpty())
            return '\0';
        return top->data;
    }
};

// Precedence of operators
int precedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/' || op == '%')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

// Associativity
bool isRightAssociative(char op) {
    return op == '^';
}

// Function to convert infix to prefix
string infixToPrefix(string infix) {
    // Step 1: Reverse the infix expression
    reverse(infix.begin(), infix.end());

    // Step 2: Swap '(' with ')' and vice versa
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    // Step 3: Apply infix to postfix logic
    Stack s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.isEmpty() && s.peek() != '(') {
                postfix += s.pop();
            }
            if (!s.isEmpty())
                s.pop(); // Remove '('
        }
        else {
            while (!s.isEmpty() && precedence(s.peek()) > 0 &&
                   (precedence(ch) < precedence(s.peek()) ||
                   (precedence(ch) == precedence(s.peek()) && !isRightAssociative(ch)))) {
                postfix += s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.isEmpty()) {
        postfix += s.pop();
    }

    // Step 4: Reverse postfix to get prefix
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix Expression: " << prefix << endl;

    return 0;
}
