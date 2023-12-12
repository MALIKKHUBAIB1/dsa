#include <iostream>
#include <string.h>
using namespace std;
void getUpperCase(char name[])
{
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        name[i] = name[i] - 'a' + 'A';
    }
}
void lowerCase(char name[])
{
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        name[i] = name[i] - 'A' + 'a';
    }
}
int main()
{
    char name[] = "BABBAR";
    // getUpperCase(name);
    lowerCase(name);
    cout << name << endl;
    return 0;
}