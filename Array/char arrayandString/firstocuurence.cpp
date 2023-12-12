#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string haystack = "butsad";
    string needle = "sad";
    string temp = needle.substr(0, needle.size());

    size_t pos = haystack.find(needle);
    if (pos != string::npos)
    {
        cout << pos << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}