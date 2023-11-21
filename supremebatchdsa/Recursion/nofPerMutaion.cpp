#include <iostream>
#include <string>
using namespace std;
void noOfPermutation(string &str, int i)
{
    if (i >= str.length())
    {
        cout << str << endl;
        return;
    }
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        noOfPermutation(str, i + 1);
        //backtracking
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "bbb";
    int i = 0;
    noOfPermutation(str, i);
    return 0;
}