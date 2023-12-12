#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (l <= h)
    {
        if (!isalpha(str[l]))
        {
            l++;
        }
        if (!isalpha(str[h]))
        {
            h--;
        }
        if (str[l] != str[h])
        {
            return false;
        }

        l++;
        h--;
    }
    return true;
}
int main()
{
    string str = "A man, a plan, a canal: Panama";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    // str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str << endl;
    if (isPalindrome(str))
    {
        cout << "palindrime" << endl;
    }
    else
    {
        cout << "not palindrime" << endl;
    }
    return 0;
}