#include <iostream>
using namespace std;
int paintWays(int n, int k)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return k + k * (k - 1);
    }
     int ans = (k - 1 )* (paintWays(n - 1, k) + paintWays(n - 2, k));
     return ans;
}
int main()
{

    int n = 3;
    int k = 3;
int ans =     paintWays(n, k);
    cout<<ans<<endl;
    return 0;
}