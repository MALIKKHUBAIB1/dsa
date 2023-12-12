#include <iostream>
using namespace std;
char mostOccuringElement(string str)
{
    int hash[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i]-'a']++;
    }
    int maxi = hash[0];
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxi)
        {
            maxi = hash[i];
            index = i;
        }
    }
    char ch = index+'a';
    return ch;  
}
int main()
{
    string str = "abcbdeaef";
    cout<<mostOccuringElement(str)<<endl;
    return 0;
}