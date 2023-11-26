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
int findLenght(Node *&head)
{
  int len = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    temp = temp->next;
    len++;
  }
  return len;
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
  int len = findLenght(head);
  if (position == len)
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
void deleteNode(int position, Node *&head, Node *&tail)
{
  if (head == NULL)
  {
    cout << "head is NULL" << endl;
    return;
  }
  // delteing first node
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  }
  // delteing last Node;
  int len = findLenght(head);
  if (position == len)
  {
    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
      prev = prev - 1;
      i++;
    }
    // step2
    prev->next = NULL;
    // step3
    Node *temp = tail;
    // step4
    tail = prev;
    // step5
    delete temp;
    return;
  }
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

  // insertAtPosition(101, 4, head, tail);
  deleteNode(1, head, tail);
  cout << endl;
  print(head);
  return 0;
}