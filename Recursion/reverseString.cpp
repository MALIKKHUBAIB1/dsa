#include <iostream>
using namespace std;
void reversesring(string &str, int s, int e)
{

    if (s >= e)
    {
        return;
    }
    swap(str[s], str[e]);
    reversesring(str, s + 1, e - 1);
}
int main()
{
    string str = "string of the year";
    int s = 0;
    int e = str.length() - 1;
    // while (s <= e)
    // {
    //     swap(str[s], str[e]);
    //     s++;
    //     e--;
    // }

    reversesring(str, s, e);
    cout<<str<<endl;
    return 0;
}