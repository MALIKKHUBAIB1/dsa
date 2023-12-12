#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 3, 5, 5, 6};

    // unordered_map<int, int> hash;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     hash[arr[i]]++;
    // }
    // int ans = -1;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (hash[arr[i]] > 1)
    //     {
    //         ans = i + 1;
    //         break;
    //     }
    // }
    // cout << ans << endl;

    // by using whitout map
    int n = arr.size();
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // cout << max << endl;

    int ans = -1;
    int hash[256] = {0};

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            ans = i + 1;
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << hash[arr[i]] << endl;
    }
    cout << ans << endl;
    return 0;
}