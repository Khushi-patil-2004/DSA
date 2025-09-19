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
bool search(int key)
{
    Node*temp = head;
    while(temp!= nullptr)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
};
int main()
{
    LinkedList l;
    l.pushback(1);
    l.pushback(20);
    l.pushback(3);
    l.display();
     cout << "Search 20: " << (l.search(20) ? "Found" : "Not Found") << endl;
    cout << "Search 40: " << (l.search(40) ? "Found" : "Not Found") << endl;
  
    return 0;
}
