#include <iostream>
using namespace std;
// Sum of even no upto N
// int sum = 0;
// int sumofEvenNo(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//             // cout << sum << endl;
//         }
//     }
//     return sum;
// }
long fact = 1.0;
long factorial(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{

    // cout << "Allah huakbar" << endl;
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int printsumofEvenNo = sumofEvenNo(n);
    // cout << printsumofEvenNo << endl;
    int n;
    cout << "Enter the  value of n: ";
    cin >> n;
    long ans = factorial(n);
    cout << ans << endl;
    return 0;
}