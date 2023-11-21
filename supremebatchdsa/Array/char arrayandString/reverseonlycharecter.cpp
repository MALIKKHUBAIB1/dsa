#include <iostream>
#include <string>
using namespace std;
string reverseString(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (isalpha(str[i]) && isalpha(str[j]))
        {
            swap(str[i], str[j]);
            i++;
            j--;
        }
        else if (!isalpha(str[i]))
        {
            i++;
        }
        else if (!isalpha(str[j]))
        {
            j--;
        }
    }
    return str;
}
int main()
{
    string str = "ab-cd!";
    cout << reverseString(str) << endl;
    return 0;
}