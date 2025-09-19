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
 void pushfront(int val)
 {
    Node*newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
};
int main()
{
    LinkedList l;
    l.pushfront(1);
    l.pushfront(2);
    l.pushfront(3);
    l.display();
    return 0;
}
