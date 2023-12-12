#include <iostream>
#include <stack>

using namespace std;
class Stack
{
public:
  int *arr;
  int size;
  int top;

  Stack(int size)
  {
    arr = new int[size];
    this->size = size;
    this->top = -1;
  }
  void push(int data)
  {
    if (top == size - 1)
    {
      cout << "stack is full!" << endl;
    }
    top++;
    arr[top] = data;
  }
  void pop()
  {
    top--;
  }
  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }
    return false;
  }
  int getTop()
  {
    if (top == -1)
    {
      cout << "Stack is empty";
    }
    return arr[top];
  }
  int getSize()
  {
    return top + 1;
  }
  void print()
  {
    for (int i = 0; i < getSize(); i++)
    {
      cout << arr[i] << endl;
    }
  }
};
int main()
{
  // stack<int> st;
  // st.push(3);
  // st.push(2);
  // st.push(7);
  // cout << "size of the stack is " << st.size() << endl;
  // // cout << " is stack is empty " << st.empty() << endl;
  // st.pop();
  // if (st.empty())
  // {
  //   cout << "stack is empty" << endl;
  // }
  // else
  // {
  //   cout << "stack is not empty" << endl;
  // }

  // // top element
  // cout << "top element " << st.top() << endl;
  // for (int i = 0; i < st.size(); i++)
  // {
  //   cout << st[i] << endl;
  // }

  // implement stack yourself and

  Stack st(8);
  st.push(10);
  st.print();
  st.pop();
  st.pop();
  st.print();

  return 0;
}