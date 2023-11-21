#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    string s = "aab";

    int hash[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        hash[s[i] - 'a']++;
    }
    int max_freq_char;
    int maxFreq = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            max_freq_char = i + 'a';
        }
    }
    int index = 0;
    while (maxFreq > 0 && s.size())
    {
        s[index] = max_freq_char;
        maxFreq--;
        index = index + 2;
    }
    if (maxFreq != 0)
    {
        cout << "" << endl;
    }
    hash[max_freq_char - 'a'] = 0;
    
    for (int i = 0; i < 26; i++)
    {

        while (hash[i] > 0)
        {
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index = index + 2;
        }
    }

    cout << maxFreq << endl;
    cout << max_freq_char << endl;
    cout << s << endl;
    return 0;
}