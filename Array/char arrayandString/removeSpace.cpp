#include <iostream>
#include <string.h>
using namespace std;
void removeSpace(char name[])
{
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}
int main()
{
    char name[50];
    cin.getline(name, 50);
    removeSpace(name);
    cout << name << endl;
    return 0;
}