#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printAllSubArrays_utils(vector<int> &nums, int s, int e)
{
    if (e == nums.size())
        return;
    for (int i = s; i <= e; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    printAllSubArrays_utils(nums, s, e + 1);
}
void printAllSubArrays(vector<int> &nums)
{
    for (int start = 0; start < nums.size(); start++)
    {
        int end = start;
        printAllSubArrays_utils(nums, start, end);
    }
}
int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    printAllSubArrays(nums);
    return 0;
}