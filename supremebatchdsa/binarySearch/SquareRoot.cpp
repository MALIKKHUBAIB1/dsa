#include <iostream>
#include <vector>
using namespace std;
// square root of element
int findSquareRoot(int target)
{
    int start = 0;
    int end = target;
    int mid = (start + ((end - start) / 2));
    int ans = -1;
    while (start <= end)
    {
        if (mid * mid > target)
        {
            end = mid - 1;
        }
        else if (mid * mid < target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = (start + ((end - start) / 2));
    }
    return ans;
}
int main()
{

    int target;
    cout << "enter your No :";
    cin >> target;
    double ans = findSquareRoot(target);
    int precission;
    cout << "Enter Precsion : " << endl;
    cin >> precission;
    double step = 0.1;
    for (int i = 0; i < precission; i++)
    {
        for (double j = ans; j * j <= target; j = j + step)
        {
            ans = j;
        }
        step = step / 10;
    }

    cout << ans << endl;
    return 0;
}