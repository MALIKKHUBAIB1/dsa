#include <iostream>
#include <vector>
using namespace std;
string custoShort(string str)
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
    string str = "acbc";

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i] << endl;
    // }
    cout << custoShort(str) << endl;

    return 0;
}