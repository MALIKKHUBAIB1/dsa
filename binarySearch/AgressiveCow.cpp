#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &stall, int mid, int k)
{
    int cowCount = 1;
    int lastPos = stall[0];
    for (int i = 0; i < stall.size(); i++)
    {
        if (stall[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stall[i];
            // cout << lastPos << endl;
        }
    }
    return false;
}
int main()
{
    vector<int> stall = {4, 2, 1, 3, 6};
    sort(stall.begin(), stall.end());
    int maxi = stall[0];
    for (int i = 0; i < stall.size(); i++)
    {
        if (stall[i] > maxi)
        {
            maxi = stall[i];
        }
    }
    int k = 2;
    int e = maxi;
    int s = 0;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(stall, mid, k))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans << endl;

    return 0;
}