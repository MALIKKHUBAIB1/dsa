#include <iostream>
using namespace std;
void printCounting(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    //recursion relation
    printCounting(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printCounting(n);

    return 0;
}