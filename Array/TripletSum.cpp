#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> findSumOftriplet(vector<int> arr, int n)
{
    set<vector<int>> set;
    vector<vector<int>> brr;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if ((arr[i] + arr[k] + arr[j] == 0) && i != j && j != k && k != i)
                {
                    // cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                    // return {arr[i], arr[j], arr[k]};
                    // brr.push_back(arr[i]);
                    // brr.push_back(arr[j]);
                    // brr.push_back(arr[k]);
                    // return arr[i];
                    set.insert({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    for (auto i : set)
    {
        brr.push_back(i);
    }
    return brr;
    // cout << brr << endl;
}
void printingElement(vector<vector<int>> brr)
{
    for (int i = 0; i < brr.size(); i++)
    {
        // cout << "ans is " << brr[i] << endl;
    }
}
int main()
{

    vector<int> arr{-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    findSumOftriplet(arr, n);
    // printingElement(brr);
    // cout << ans << endl;
    return 0;
}