#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    int smallproblem = factorial(n - 1);
    int largeProblem = n * smallproblem;
    return largeProblem;
}
int power(int base, int n)
{
    if (n == 0)
        return 1;
    ;
    int bigProblem = power(base, n - 1);
    int smallproblem = bigProblem * base;
    return smallproblem;
}
int main()
{
    int base;
    cin >> base;
    int expo;
    cin >> expo;

    int powr = power(base, expo);
    cout << powr << endl;
    // int n;
    // cin >> n;
    // int ans = factorial(n);
    // cout << ans << endl;
    return 0;
}