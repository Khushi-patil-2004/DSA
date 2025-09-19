#include<iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node*next;
  
  Node(int value)
  {
      data = value;
      next = nullptr;
  }
};
class LinkedList
{
  public:
  Node*head;
   LinkedList() {
        head = nullptr;
    }
 void pushback(int val)
 {
    Node*newNode = new Node(val);
    if(head == nullptr)
    {
        head = newNode;
        return;
    }
    Node*temp = head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next = newNode;
 }
 void display()
 {
     Node*temp = head;
     while(temp!= nullptr)
     {
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
 }
 Node* reverse(Node*head)
 {
     Node*prev = nullptr;
     Node*curr = head;
     Node*next = nullptr;
     
     while(curr != nullptr)
     {
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
     }
     return prev;
 }
};
int main()
{
    LinkedList l;
    l.pushback(1);
    l.pushback(2);
    l.pushback(3);
    cout<<"Before reverse of list:";
    l.display();
    l.head = l.reverse(l.head);
    cout<<"after reverse of list:";
    l.display();
    return 0;
}
