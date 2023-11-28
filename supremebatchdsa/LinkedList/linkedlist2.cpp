#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node()
  {
    cout << "i am default constructor" << endl;
    this->next = NULL;
  }
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  // jab bhi hum dynamically kisi var ko delete karte hai then destructor automatically called ho jata hai
  ~Node()
  {
    cout << "dtor is called : " << this->data << endl;
  }
};
// print lenght of nodes in linked list
int findLength(Node *head)
{
  Node *temp = head;
  int len = 0;
  while (temp != NULL)
  {
    temp = temp->next;
    len++;
  }
  return len;
}
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
// insertion at Head
void insertionAtHead(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    // empty linked list

    Node *newNode = new Node(data);
    // step1
    head = newNode;
    tail = newNode;
  }
  else
  {
    // create a new node
    Node *temp = new Node(data);
    // attched new node to old or next node
    temp->next = head;
    // update head to new node
    head = temp;
  }
}
void inertionAtHead(Node *&head, Node *&tail, int data)
{
  Node *newNode = new Node(data);
  tail->next = newNode;
  tail = newNode;
}
// i want to insert a node at the end of the linked list
void insertAtTail(Node *&head, Node *&tail, int data)
{
  if (head == NULL)
  {
    // step1 create new node
    Node *newNode = new Node(data);
    // step2
    head = newNode;
    tail = newNode;
  }
  else
  {
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
  }
}
void createTails(Node *&head, Node *&tail)
{
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  tail = temp;
}
void insertAtany_position(Node *&head, Node *&tail, int pos, int data)
{
  // if (pos < 1)
  // {
  //   cout << "can not insert" << endl;
  //   // insertionAtHead(head, tail, data);
  //   return;
  // }
  int len = findLength(head);

  if (pos <= 1)
  {
    insertionAtHead(head, tail, data);
  }
  // yaha pe har koi galti karta hai pos == len karke to tumhe yaha par len+1 karna hai hamesha
  else if (pos >= len)
  {
    insertAtTail(head, tail, data);
  }
  else
  {
    // insert at middile of the linked list
    // create a new node
    Node *newNode = new Node(data);
    Node *prev = NULL;
    Node *curr = head;
    while (pos != 1)
    {
      prev = curr;
      curr = curr->next;
      pos--;
    }
    // attached prev to new node
    prev->next = newNode;
    // attached new node to the cureent node whic is pointing
    newNode->next = curr;
  }
}

void deleteNode(Node *&head, Node *&tail, int pos)
{
  // if linked list is empty
  if (head == NULL)
  {
    cout << "can not delete node linked list is empty" << endl;
    return;
  }
  // delete from head
  if (pos == 1)
  {
    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  // delete from tail
  int len = findLength(head);
  // Node *temp = head;
  // Node *curr = temp->next;
  Node *prev = head;
  if (pos == len)
  {
    // while (temp->next != NULL)
    // {
    //   prev = curr;
    //   temp = temp->next;
    //   curr = temp;
    // }

    // prev->next = NULL;
    // another way of looping to get previous
    while (prev->next != tail)
    {
      prev = prev->next;
    }
    prev->next = NULL;
    delete tail;
    tail = prev;
  }
  else
  {
    // delte at the middele of linked list
    Node *prev = head;
    Node *curr = head;
    int index = 1;
    while (index != pos)
    {
      prev = curr;
      curr = curr->next;
      index++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    // curr = curr->next;
  }
}
int main()
{
  // Node n; // static allocation
  // or
  // Node *first = new Node(10); // dynamically called object
  // Node *second = new Node(20);
  // Node *third = new Node(30);
  // Node *fourth = new Node(40);
  // first->next = second;
  // second->next = third;
  // third->next = fourth;

  // Node *head = first;
  // Node *tail;
  // print(head);
  // cout << endl;
  // // cout << "leght of lined list is : " << findLength(head) << endl;
  // // insertionAtHead(head, tail, 9);
  // createTails(head, tail);
  // insertAtTail(head, tail, 9);
  // print(head);

  Node *head = NULL;
  Node *tail = NULL;
  insertAtTail(head, tail, 30);
  insertAtTail(head, tail, 20);
  insertAtTail(head, tail, 10);
  insertAtTail(head, tail, 50);
  // print(head);
  // cout << endl;
  // print(head);
  int len = findLength(head);
  cout << len << endl;
  insertAtany_position(head, tail, 2, 41);
  print(head);
  cout << endl;
  deleteNode(head, tail, 4);
  // cout << endl;
  print(head);
  return 0;
}