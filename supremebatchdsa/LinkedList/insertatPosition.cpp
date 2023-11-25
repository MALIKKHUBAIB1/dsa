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

void print(Node *&first)
{
  Node *temp = first;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
  // if ll is empty
  if (head == NULL)
  {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  if (position == 0)
  {
    insetAtHead(head, tail, data);
    return;
  }
  if (position == 0)
  {
    insertAtTail(tail, head, data);
    return;
  }
  int i = 1;
  Node *prev = head;
  while (i < position)
  {
    prev = prev->next;
    i++;
  }
  Node *cur = prev->next;
  Node *newNode = new Node(data);
  newNode->next = cur;
  prev->next = newNode;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  insetAtHead(head, tail, 30);
  insetAtHead(head, tail, 60);
  insetAtHead(head, tail, 90);
  insertAtTail(tail, head, 40);
  print(head);

  insertAtPosition(101, 4, head, tail);
  cout << endl;
  print(head);
  return 0;
}