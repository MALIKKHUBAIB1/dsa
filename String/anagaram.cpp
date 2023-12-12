#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string customSortA(string &anagram)
{

    vector<int> freq(26, 0);
    for (int i = 0; i < anagram.length(); i++)
    {
        int index = anagram[i] - 'a';
        freq[index]++;
    }
    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            anagram[j] = i + 'a';
            j++;
        }
    }
    return anagram;
}
string customSortB(string &str)
{

    vector<int> freq(26, 0);
    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }
    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            str[j] = i + 'a';
            j++;
        }
    }
    return str;
}
int main()
{
    string str;
    cin >> str;
    string anagram;
    cin >> anagram;

    int sizeOfStr = str.size();
    int sizeOfAanagram = anagram.size();
    if (sizeOfAanagram != sizeOfStr)
    {
        cout << "this is not because size is difrent  anagram" << endl;
    }
    else if (customSortA(anagram) != customSortA(anagram))
    {
        cout << "not a anagram" << endl;
    }
    else
    {
        cout << "anagram" << endl;
    }
    // customSortA(anagram);
    // customSortB(str);

    // cout << sizeOfStr << endl;
    // sort(anagram.begin(), anagram.end());
    // sort(str.begin(), str.end());

    // if (str == anagram)
    // {
    //     cout << "this is anagram" << endl;
    // }
    // else
    // {
    //     cout << "not anagram" << endl;
    // }
    return 0;
}