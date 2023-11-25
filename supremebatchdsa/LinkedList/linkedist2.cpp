#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node()
  {
    this->data = 0;
    this->next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
void insertAtTail(Node *&tail, Node *&head, int data)
{
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  // step1
  Node *newNode = new Node(data);
  // step2
  tail->next = newNode;

  tail = newNode;
}
void insetAtHead(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  // step1
  // create new node
  Node *newNode = new Node(data);
  // step2
  // set new node to the previous node
  newNode->next = head;
  // step3
  // ste  head to new node
  head = newNode;
}
void print(Node *&first)
{
  Node *temp = first;
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
  insetAtHead(head, tail, 20);
  insetAtHead(head, tail, 30);
  insetAtHead(head, tail, 60);
  insetAtHead(head, tail, 90);
  insertAtTail(tail, head, 30);
  insertAtTail(tail, head, 40);
  // insertAtTail(tail, 50);
  // insertAtTail(tail, 60);

  print(head);

  return 0;
}