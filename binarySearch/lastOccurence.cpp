#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lastoccurence(vector<int> arr, int target)
{
    int s = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = (s + ((end - s) / 2));
    while (s <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {

            s = mid + 1;
        }
        mid = (s + ((end - s) / 2));
    }
    return ans;
}
int main()
{
    vector<int> arr{2, 5, 7, 7, 7, 7, 7, 7, 7, 9, 20};
    int target = 7;
    int ans = lastoccurence(arr, target);
    cout << ans << endl;
    // implemented function of lastoccurnce
    // auto ans2 = lower_bound(arr.begin(), arr.end(), target);
    // cout << ans2-arr.begin() << endl;
    return 0;
}