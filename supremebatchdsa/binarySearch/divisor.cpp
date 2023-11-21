#include <iostream>
#include <vector>
using namespace std;
int findquiteint(long dividend, long divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(dividend))
        {
            end = mid - 1;
        }
        if (abs(mid * divisor) < abs(dividend))
        {
            start = mid + 1;
            ans = mid;
        }
        if (divisor * dividend == dividend)
        {
            ans = dividend;
        }
        mid = start + (end - start) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))

        return ans;

    else
    {
        return -ans;
    }
}
int main()
{
    // int dividend = -2147483648;
    // int divisor = -1;
    // int ans = findquiteint(dividend, divisor);
    // cout << ans << endl;

    vector<int> arr{1, 1, 2, 3, 3, 4, 4, 8, 8};
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = (ans ^ arr[i]);
    }
    cout << ans << endl;

    return 0;
}