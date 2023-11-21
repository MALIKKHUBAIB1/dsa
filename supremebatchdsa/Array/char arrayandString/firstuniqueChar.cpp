#include <iostream>
using namespace std;

int main()
{
    string s = "abccbaacz";
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    // char ch;

    for (auto ch : s)
    {
        // ch = s[i];
        if (hash[ch - 'a'] > 1)
        {
            // hash[s[i] + 'a']++;
            cout << ch << endl;
        }
    }
    cout << 'a'<< endl;
    return 0;
}