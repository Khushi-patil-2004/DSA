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
int length()
{
    int count = 0;
    Node*temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
};
int main()
{
    LinkedList l;
    l.pushback(1);
    l.pushback(2);
    l.pushback(3);
    l.display();
  cout << "Length of Linked List: " << l.length() << endl;  
    return 0;
}
