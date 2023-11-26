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
};
void print(Node *head)
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
  // Node n; // static allocation
  // or
  Node *first = new Node(10); // dynamically called object
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  first->next = second;
  second->next = third;
  third->next = fourth;

  Node *head = first;
  print(head);
  return 0;
}