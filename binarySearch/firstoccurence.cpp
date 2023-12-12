#include <iostream>
#include <vector>
using namespace std;
int firstOcurrence(vector<int> arr, int target)
{
    int s = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = (s + ((end - s) / 2));
    while (s <= end)
    {
        if (arr[mid] == target)
        {
            // store ans
            ans = mid;
            // srching in left
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            // serching right
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // searching left
            end = mid - 1;
        }
        mid = (s + ((end - s) / 2));
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int ans = firstOcurrence(arr, target);

    cout << ans << endl;
    return 0;
}