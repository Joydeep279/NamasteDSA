#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* nextPtr;

    Node(int value){

      data=value;
      nextPtr=NULL;

    }
};

Node* head=NULL;
Node* currentNodePointer=head;

int getLength()
{
  int len=0;
  Node* temp=head;
  while (temp!=NULL) {
    len++;
    temp=temp->nextPtr;
  }
return len;
}

void insertAtTail(int value){

  if (head==NULL) {
    Node* temp=new Node(value);
    head=temp;
    currentNodePointer=temp;
  }
else
{
  Node* temp=new Node(value);
  currentNodePointer->nextPtr=temp;
  currentNodePointer=temp;
  temp->nextPtr=NULL;
}

}

void insertAtHead(int value)
{
  if (head==NULL) {
    Node* temp=new Node(value);
    head=temp;
    currentNodePointer=temp;
  }
  else{
      Node* temp=new Node(value);
      temp->nextPtr=head;
      head=temp;
  }
}


void insertAtIndex(int index,int val)
{
    if (index>=getLength()) {
      return;
    }
    else {
      Node* fastPtr;
      Node* slowPtr;
      fastPtr=head;
      for (int i = 0; i < index; i++) {
          slowPtr=fastPtr;
          fastPtr=fastPtr->nextPtr;
      }
      Node* temp =new Node(val);
      temp->nextPtr=fastPtr;
      slowPtr->nextPtr=temp;
    }
}

int getIndex(int index){

if (index>=getLength())
   return -1;
else{
  Node* temp=head;
    for (int i = 0; i < index; i++)
      temp=temp->nextPtr;
    return temp->data;
}

return -1;
}


void deleteAtIndex(int index)
{
  if (index>=getLength()) {
    return;
  }
  else {
    Node* fastPtr;
    Node* slowPtr;
    fastPtr=head;
    for (int i = 0; i < index; i++) {
        slowPtr=fastPtr;
        fastPtr=fastPtr->nextPtr;
    }
    slowPtr->nextPtr=fastPtr->nextPtr;
    free(fastPtr);
    return;
  }
}

void  display()
{
  Node* temp=head;
  while (temp!=NULL) {
    cout<<temp->data<<" ";
    temp=temp->nextPtr;
  }
  cout<<endl;
}

int main() {

  insertAtTail(20);
  insertAtTail(30);
  insertAtTail(40);

  display();

  insertAtHead(-20);
  insertAtHead(-50);
  insertAtHead(-30);

  display();

  cout<<getLength()<<"\n";
  cout<<getIndex(2)<<"\n";
  insertAtIndex(1,10);
  display();

  deleteAtIndex(3);
  
  display();

  return 0;
}
