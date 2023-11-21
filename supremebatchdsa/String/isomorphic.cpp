#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    vector<int> frqs(128, -1);
    vector<int> frqt(128, -1);
    for (int i = 0; i < t.length(); i++)
    {
        if (frqt[t[i]] != frqs[s[i]])
        {
            return false;
        }
        frqs[s[i]]=frqt[t[i]]=i;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (frqs[i] != frqt[i])
    //     {
    //         return false;
    //     }
    // }
    return true;
}
int main()
{
    string t = "egge";
    string s = "addsddd";
    if (isIsomorphic(t, s))
    {
        cout << "valid isomorphic" << endl;
    }
    else
    {
        cout << "not valid" << endl;
    }
    return 0;
}