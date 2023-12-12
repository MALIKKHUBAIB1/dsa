#include <iostream>
using namespace std;

bool isvowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}
int main()
{
    string name = "hello";
    int i = 0;
    int j = name.size() - 1;
    while (i < j)
    {

        if (isvowel(name[i]) && isvowel(name[j]))
        {
            swap(name[i], name[j]);
            i++;
            j--;
        }
        if (!isvowel(name[i]))
        {
            i++;
        }
        if (!isvowel(name[j]))
        {
            j--;
        }
    }
    cout << name << endl;
    return 0;
}