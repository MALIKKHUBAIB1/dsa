#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int nums[4] =
    vector<int> nums{2, 7, 11, 8,1};
    vector<int> result;
    int count = 0;
    int target = 9;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                count++;
            }
        }
    }
    cout << count << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}