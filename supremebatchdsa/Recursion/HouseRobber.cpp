#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int solve(vector<int> nums, int size, int index)
{
    if (index >= size)
    {
        return 0;
    }
    // ya to chori kar lo
    int option1 = nums[index] + solve(nums, size, index + 2);
    int option2 = 0 + solve(nums, size, index + 1);
    int finalAns = max(option1, option2);
    return finalAns;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int size = nums.size();
    int index = 0;
    cout << solve(nums, size, index) << endl;
    return 0;
}