#include <iostream>
using namespace std;
int solve(int nums)
{
    if (nums == 1)
    {
        return 0;
    }
    if (nums == 2)
    {
        return 1;
    }
return (nums - 1) * (solve(nums - 2) + solve(nums - 1));
   
}
int main()
{
    int nums = 10;
    int ans = solve(nums);
    cout << ans << endl;

    return 0;
}