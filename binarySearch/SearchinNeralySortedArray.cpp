#include <iostream>
#include <vector>
using namespace std;
int searchInNearlySortedArray(vector<int> &arr, int start, int end, int target)
{
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (mid + 1 <= arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int start = 0;
    int end = arr.size() - 1;
    int target = 70;
    int ans = searchInNearlySortedArray(arr, start, end, target);
    cout << ans << endl;
    return 0;
}