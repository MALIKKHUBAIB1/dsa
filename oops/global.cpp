#include <iostream>
using namespace std;
int x = 2;
void print()
{
    int x = 24;
    cout << ::x << endl;
    cout << x << endl;
}
int main()
{
    x = 4;
    int x = 20;
    // cout << x << endl;//aceesing the local variable
    cout << ::x << endl;
    {
        int x = 3;
        // cout << x << endl;
        cout << ::x << endl;
    }
    print();
    return 0;
}