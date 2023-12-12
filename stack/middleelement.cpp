#include <iostream>
#include <stack>
using namespace std;
void getElement(stack<int> &st, int &pos, int &ans)
{
  if (pos == 1)
  {
    ans = st.top();
    return;
  }
  // 1 case hum slove kargene and else rucursion dekh lege
  pos--;
  int temp = st.top();
  st.pop();
  getElement(st, pos, ans);
  st.push(temp);
}
int getMiddleElement(stack<int> &st)
{
  int pos = 0;
  int size = st.size();
  if (st.empty())
  {
    return -1;
  }
  else
  {

    if (size and 1)
    {
      // odd
      pos = size / 2 + 1;
    }
    else
    {
      // even
      pos = size / 2;
    }
  }
  return pos;
}
int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);

  int ans = 0;
  int pos = getMiddleElement(st);
  getElement(st, pos, ans);
  cout << "the midle element of the stack is " << ans << endl;
  return 0;
}