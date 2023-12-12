#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    // char ch[5];
    // cin >> ch;
    // for (int i = 0; i < 4; i++)
    // {
    //     cin >> ch;
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "index is: " << i << "ans ch is " << ch << endl;
    // }
    // int val = int(ch[5]);
    // cout << val << endl;
    // char name[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> name[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << name[i];
    // }
    // cout << endl;
    char name[100];
    // cin >> name;
    // for reading tab or space line we use getline function

    // getline(cin,name);
    int val =int(name) ;
    cin.getline(name, 50);
    cout << name << endl;

    return 0;
}