#include <iostream>
using namespace std;
void solve(string str, int index, int &ans,char chs)
{
    if (index >= str.size())
    {
        return;
    }
    char ch = str[index];
    if(ch == chs){
        ans = index;
    }
    solve(str, index+1, ans,chs);
}
int main()
{
    string str = "hello word";
    char chs= 'o';
    int index = 0;
    int ans = 0;
    solve(str, index, ans,chs);
    // this is also a solution but we have to make sure ki recusivley solve karna hai
    //  for (int i = str.size(); i >= 0; i--)
    //  {
    //      char crt = str[i];
    //      if (ch == crt)
    //      {
    //          index = i;
    //          break;
    //      }
    //  }
    //  cout << index << endl;
    cout<<ans<<endl;

    return 0;
}