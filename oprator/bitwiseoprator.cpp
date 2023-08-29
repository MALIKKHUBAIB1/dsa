#include <iostream>
using namespace std;
int main()
{
    // Left shift
    // int a = 12;
    // a = a << 1;
    // cout << a << endl;
    // right shift
    // int a = 25;
    // a = a >> 1;
    // cout << a << endl;

    // Pre Increament
    // int a = 5;
    // cout << ++a << endl; // output will be 6
    // // post increametn
    // int b = 5;
    // cout << b++ << endl; // output will be 5
    // cout << b << endl;

    // int a = 6;
    // int c = ++a + 1;
    // cout << c << endl;

    // int a = 6;
    // int c = (a++) + 1;

    // int a = 5;
    // cout << (++a) * (++a) << endl;
    // cout << c << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     // continue;
    //     cout << "Love" << endl;
    //     continue;
    // }

    // variable scoping

    // declartion
    int a;
    // initilization
    int b = 10;
    // updation;
    b = 11;

    if (true)
    {
        int b = 21;
        cout << "local variable : " << b << endl;
    }
    cout << "gloval variable : " << b << endl;
}