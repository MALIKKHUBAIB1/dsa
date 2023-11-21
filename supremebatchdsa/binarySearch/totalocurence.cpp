#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// finding first occurence
int firstOccurence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    // calculating middle index
    int mid = (start + ((end - start) / 2));
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            ans = mid;
            // searching left
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            // searching right
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // searching left
            end = mid - 1;
        }
        // upadting middle index;
        mid = (start + ((end - start) / 2));
    }
    // returning ans
    return ans;
}
// finding last occurence

int lastOcurence(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = (start + ((end - start) / 2));
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            ans = mid; // storing ans
            // serahing right
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            // searching  right
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // searching left
            end = mid - 1;
        }
        // upadting middle index;
        mid = (start + ((end - start) / 2));
    }
    return ans;
}

int main()
{
    vector<int> arr{2, 4, 4, 4, 4, 4, 4, 6, 8, 10};
    int target = 4;
    int ans1 = firstOccurence(arr, target);
    int ans2 = lastOcurence(arr, target);
    int tottalOccurence = ans2 - ans1 + 1; // calculating totoal no of occurence
    cout << "total no of occurence" << tottalOccurence << endl;
    return 0;
}