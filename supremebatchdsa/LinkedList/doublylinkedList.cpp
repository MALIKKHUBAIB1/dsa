#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *prev;
  Node *next;
  Node()
  {
    cout << "deafault constructor is called" << endl;
    this->prev = NULL;
    this->next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};
int findLenght(Node *&head)
{
  int length = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    temp = temp->next;
    length++;
  }
  return length;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    // cout << "head is NULL" << endl;
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else
  {
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}
void insertAtMiddle(Node *&head, Node *&tail, int data, int pos)
{
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    tail = newNode;
    head = newNode;
  }
  else
  {
    int len = findLenght(head);
    if (pos <= 1)
    {
      insertAtHead(head, tail, data);
      return;
    }
    else if (pos >= len)
    {
      insertAtTail(head, tail, data);
      return;
    }
    else
    {
      Node *newNode = new Node(data);
      Node *prev = head;
      Node *curr = head;
      while (pos != 1)
      {
        prev = curr;
        curr = curr->next;
        pos--;
      }
      prev->next = newNode;
      newNode->prev = prev;
      newNode->next = curr;
      curr->prev = newNode;
    }
  }
}
void delteAtHead(Node *&head, Node *&tail, int pos)
{
  if (head == NULL)
  {
    cout << "head is NULL can not delete" << endl;
  }
  else if (pos == 1)
  {
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
  }
}
void delteAtEnd(Node *&head, Node *&tail, int pos)
{
  int len = findLenght(head);
  if (head == NULL)
  {
    cout << "head is NULL can not delete" << endl;
  }
  else if (pos == len)
  {
    Node *temp = tail;
    temp = temp->prev;
    temp->next = NULL;
    tail->prev = NULL;
    delete tail;
    tail = temp;
  }
}
void delteAtAnyPosition(Node *&head, Node *&tail, int pos)
{
  int len = findLenght(head);
  if (head == tail)
  {
    Node *temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
  }
  if (head == NULL)
  {
    cout << "head is NULL can not delete" << endl;
    return;
  }
  if (pos == 1)
  {
    delteAtHead(head, tail, pos);
  }
  else if (pos == len)
  {
    delteAtEnd(head, tail, pos);
  }
  else
  {

    Node *currNode = head;
    Node *prevNode = head;
    Node *nextNode = head;
    while (pos != 1)
    {
      prevNode = currNode;
      currNode = currNode->next;
      nextNode = currNode->next;
      pos--;
    }
    currNode->prev = NULL;
    currNode->next = NULL;
    nextNode->prev = prevNode;
    prevNode->next = nextNode;
    delete currNode;
  }
}
void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 100);
  insertAtHead(head, tail, 90);
  insertAtHead(head, tail, 80);
  // print(head);
  // cout << endl;
  insertAtTail(head, tail, 70);
  insertAtTail(head, tail, 60);
  insertAtTail(head, tail, 50);
  // print(head);
  insertAtMiddle(head, tail, 1, 3);
  // cout << endl;
  print(head);
  delteAtHead(head, tail, 1);
  cout << endl;
  print(head);
  delteAtEnd(head, tail, 6);
  cout << endl;
  print(head);
  delteAtAnyPosition(head, tail, 3);
  cout << endl;
  print(head);
  return 0;
}