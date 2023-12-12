#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int pagesum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + pagesum <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int main()
{
    vector<int> arr = {2, 8, 8, 4, 5};
    int n = arr.size();
    int m = 6;
    int s = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }

    int e = sum;
    cout<<e<<endl;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        // if solution exist
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            // if solution not exist
            s = mid + 1;
        }
        cout<<"mid: "<<mid<<endl;
        mid = s + (e - s) / 2;
    }
    cout << ans << endl;
    return 0;
}