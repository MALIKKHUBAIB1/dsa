#include <iostream>
#include <vector>
using namespace std;

int searchTarget(vector<int> nums, int start, int end, int target)
{
    int mid = (start + ((end - start) / 2));
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        } 
        else
        {
            end = mid - 1;
        }
        mid = (start + ((end - start) / 2));
    }
    return -1;
}
int expSearch(vector<int> nums, int end, int target)
{
    if (nums[0] == target)
        return 0;
    int i = 1;
    while (i < nums.size() && nums[i] <= target)
    {
        i = i * 2;
    }
    return searchTarget(nums, i / 2, min(i, end - 1), target);
}
int main()
{
    vector<int> nums = {3, 4, 5, 6, 11, 13, 14, 15, 56, 96};
    int target = 56;

    int end = nums.size() - 1;
    cout << expSearch(nums, end, target) << endl;
    return 0;
}