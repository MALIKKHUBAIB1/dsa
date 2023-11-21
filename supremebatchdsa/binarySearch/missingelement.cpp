#include <iostream>
#include <vector>
using namespace std;

// this is the wrong approch so dont do this
int missingElemetn(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + (end - start) / 2);
    int ans = -1;
    while (start <= end)
    {
        if ((arr[mid + 1] - arr[mid]) == 2)
        {
            ans = ((arr[mid + 1] + arr[mid]) / 2);
            break;
        }
        else if ((arr[mid] - arr[mid - 1]) == 2)
        {
            ans = ((arr[mid] + arr[mid - 1]) / 2);
            break;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return ans;
}
int main()
{
    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 9};
    int ans = missingElemetn(arr);
    cout << ans << endl;
    return 0;
}