#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void funSum(vector<int> &arr, vector<vector<int>> &ans, int index, int target, vector<int> &ds)
{
    if (index == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    // pickup the element
    if (arr[index] <= target)
    {
        ds.push_back(arr[index]);
        funSum(arr, ans, index, target - arr[index], ds);
        ds.pop_back();
    }
    // not pickup the element
    funSum(arr, ans, index + 1, target, ds);
}
int main()
{
    int index = 0;
    vector<int> arr = {2, 3, 6, 7};
    vector<vector<int>> ans;
    int target = 7;
    vector<int> ds;
    funSum(arr, ans, index, target, ds);

    return 0;
}