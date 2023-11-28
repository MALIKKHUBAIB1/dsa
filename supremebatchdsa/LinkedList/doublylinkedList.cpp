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
void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
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
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 100);
  insertAtHead(head, tail, 90);
  insertAtHead(head, tail, 80);
  print(head);
  cout << endl;
  insertAtTail(head, tail, 70);
  insertAtTail(head, tail, 60);
  insertAtTail(head, tail, 50);
  print(head);

  return 0;
}