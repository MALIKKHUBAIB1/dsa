#include <iostream>
#include <stack>
using namespace std;
void insertAtsortedArray(stack<int> &st, int &ele)
{
  // base case
  //! important yahi pe galti ki thi make sur ki check karlo ki stack ka top empty to nhi hai
  if (st.empty() || ele > st.top())
  {
    st.push(ele);
    return;
  }
  // 1 case
  int temp = st.top();
  st.pop();
  insertAtsortedArray(st, ele);
  st.push(temp);
}
int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  int ele = 35;
  insertAtsortedArray(st, ele);
  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  return 0;
}