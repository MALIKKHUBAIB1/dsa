#include <iostream>
#include <string.h>
using namespace std;
int getLenght(char name[], int len)
{
    int lenght = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        lenght++;
        i++;
    }
    return lenght;
}
int main()
{

    char name[50];
    cin.getline(name, 50);
    cout << getLenght(name, 50) << endl;
    cout << "the length is " << strlen(name) << endl;
    return 0;
}