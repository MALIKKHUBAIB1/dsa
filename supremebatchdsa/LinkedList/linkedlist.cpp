#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  // contructor
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
  // creating new node
  Node *first = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  Node *fifth = new Node(50);

  // pionting to the next node
  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  print(first);

  return 0;
}