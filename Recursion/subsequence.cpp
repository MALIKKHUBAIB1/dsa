#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void findSubsequnce(string str, string outPut, int index)
{
    if (index >= str.size())
    {
        cout << ": " << outPut << endl;
        return;
    }
    // exclude
    char ch = str[index];
    findSubsequnce(str, outPut, index + 1);
    // inlude
    outPut.push_back(ch);
    findSubsequnce(str, outPut, index + 1);
}

int main()
{
    string str = "abc";
    string outPut = "";
    int index = 0;

    findSubsequnce(str, outPut, index);

    return 0;
}