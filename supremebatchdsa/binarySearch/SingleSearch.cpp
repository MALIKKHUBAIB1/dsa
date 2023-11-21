#include <iostream>
#include <vector>
using namespace std;
int serachRotatedArry(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == arr[mid + 1])
        {
            start = mid + 2;
        }
        if (arr[mid] == arr[mid - 1])
        {
            end = mid - 2;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 1, 2, 3, 3, 4, 4, 8, 8};
    int ans = serachRotatedArry(arr);
    cout << ans << endl;
    return 0;
}