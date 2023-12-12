#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isNoPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            cout << "not a prime no";
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}