#include <iostream>
#include <stack>
using namespace std;

int main()
{
  string str = "hello world";
  stack<char> st;
  for (auto i : str)
  {
    st.push(i);
  }
  while (!st.empty())
  {
    cout << st.top() << "";
    st.pop();
  }
  cout << endl;
  return 0;
}