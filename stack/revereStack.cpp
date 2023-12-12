#include <iostream>
#include <stack>
using namespace std;
void insertAt_bottom(stack<int> &st, int &ele)
{
  if (st.empty())
  {
    st.push(ele);
    return;
  }
  // solve one case
  int temp = st.top();
  st.pop();
  // baki recursion
  insertAt_bottom(st, ele);
  // backtrack
  st.push(temp);
}
void revsreStack(stack<int> &st)
{
  // base case
  if (st.empty())
  {
    return;
  }
  // 1 case
  int temp = st.top();
  st.pop();
  // recuesion
  revsreStack(st);
  insertAt_bottom(st, temp);
}
int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  revsreStack(st);
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  return 0;
}