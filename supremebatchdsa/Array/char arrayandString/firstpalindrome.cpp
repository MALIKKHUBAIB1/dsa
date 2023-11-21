#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;
string checkFirstPalindrome(vector<string> &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        string current = str[i];
        int s = 0;
        int e = current.size() - 1;
        cout <<"s : "<< current[s] << endl;
        cout <<"e:"<< current[e] << endl;

        // while (s <= e && current.size())
        //     if (current[s] != current[e])
        //     {
        //         break;
        //     }
        // if (current[s] == current[e])
        // {
        //     s++;
        //     e--;
        // }
    }
}
int main()
{
    vector<string> str = {"abc", "car", "ada", "racecar", "cool"};
    checkFirstPalindrome(str);
    return 0;
}