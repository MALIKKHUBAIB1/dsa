#include <iostream>
using namespace std;

// void means jab kuch return nhi karna hota hai to we use void type

// void PrintName()
// {
//     // printing babbar 5 times
//     int n;
//     cout << "enter the value of  :";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {

//         cout << "babbar" << endl;
//     }
// }

// Write a Functio to add two number taing input by the user

// int addTwoNumber(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// find  the max of three Number
// void maxofhreeNumber(int a, int b, int c)
// {
//     if (a > b || a > c)
//     {
//         cout << "a is max" << a << endl;
//     }
//     else if (b > a || b > c)
//     {
//         cout << "b is max" << b << endl;
//     }
//     else if (a = b = c)
//     {
//         cout << "number are equal" << endl;
//         ;
//     }
//     else
//     {
//         cout << "c is max" << c << endl;
//     }
// }

// Printing 1 to N;

// void PrintToN(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << " " << endl;
//     }
//     cout << endl;
// }

// Student garde
// void studentGrade(int n)
// {
//     if (n >= 90)
//     {
//         cout << "the Grade is A and the marks is : " << n << endl;
//     }
//     else if (n >= 80)
//     {
//         cout << "the Grade is B and the marks is :" << n << endl;
//     }
//     else if (n >= 70)
//     {
//         cout << "the Grade is C and the marks is :" << n << endl;
//     }
//     else if (n >= 60)
//     {
//         cout << "the Grade is D and the marks is :" << n << endl;
//     }
//     else
//     {
//         cout << "the Grade is E and the marks is :" << n << endl;
//     }
// }
// the  second way to print the student grade
char studentGrade(int n)
{
    switch (n)
    {
    case 90:
        return 'A';
        break;
    case 80:
        return 'B';
        break;
    case 70:
        return 'C';
        break;
    case 60:
        return 'D';
        break;

    default:
        return 'E';
        break;
    }
}
int main()
{
    // clalling the function
    // PrintName();
    // int a;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // int b;
    // cout << "Enter the value of a : ";
    // cin >> b;
    // int sum = addTwoNumber(a, b);
    // cout << "the value of sum is :" << sum << endl;

    // int a;
    // cout << "Enter the value of a : ";
    // cin >> a;
    // int b;
    // cout << "Enter the value of a : ";
    // cin >> b;
    // int c;
    // cout << "Enter the value of a : ";
    // cin >> c;
    // maxofhreeNumber(a, b, c);
    int n;
    cout << "Enter the vlaue of a ";
    cin >> n;
    // PrintToN(n);
    char printGrade = studentGrade(n);
    cout << printGrade << endl;
    return 0;
}