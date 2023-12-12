#include <iostream>
#include <string.h>
using namespace std;
// char palindrome(char name[])
// {
//     int i = 0;
//     int j = strlen(name) - 1;
//     while (i <= j)
//     {
//         swap(name[i], name[j]);
//         i++;
//         j--;
//     }
// }
bool palindrome(char name[])
{
    int i = 0;
    int j = strlen(name) - 1;
    while (i <= j)
    {
        if (name[i] == name[j])
        {
            return true;
        }
        else
        {
            i++;
            j--;
        }
        return false;
    }
}
int main()
{
    char name[50] = "malik";
    cin.getline(name, 50);

    if (palindrome(name) == 0)
    {
        cout << "not a Plaindrome" << endl;
    }
    else
    {
        cout << "palindrome no" << endl;
    }
    cout << name << endl;
    return 0;
}