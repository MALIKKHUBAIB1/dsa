#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    string s = "   fly me   to   the moon  ";
    // reverse(s.begin(), s.end());
    // cout << s << endl;
    int start = 0;
    while (s[start] == ' ')
    {
        if(s[start])
        start++;
    }
    cout << "back pos " << s.back() << endl;

    int pos = s.find(" ");
    string str = s.substr(0, pos);
    // cout << str.size() << endl;

    return 0;
}