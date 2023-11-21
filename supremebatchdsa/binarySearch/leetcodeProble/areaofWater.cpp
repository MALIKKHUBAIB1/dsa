#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr{1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> arr2;
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int max = INT_MIN;
    // int distance;
    while (start <= end)
    {
        if (arr[start] > arr[end])
        {
            int distance = end - start;
            ans = distance * arr[end];
            arr2.push_back(ans);
            end--;
        }
        else if (arr[start] < arr[end] || arr[start] == arr[end])
        {
            int distance = end - start;
            ans = distance * arr[start];
            arr2.push_back(ans);
            start++;
        }
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        // cout << arr2[i] << " ";
        if (max < arr2[i])
        {
            max = arr2[i];
        }
        
    }
    cout << max << endl;

    return 0;
}