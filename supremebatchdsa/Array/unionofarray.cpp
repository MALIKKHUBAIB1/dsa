#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the aize of an array";
    // cin >> n;
    int arr[] = {1, 2, 4, 3, 5, 7, 9, 9};
    int brr[] = {2, 4, 6, 8};
    int sizea = 8;
    int sizeb = 4;
    // int ans[] = {};
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {

        ans.push_back(brr[i]);
    }
    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizeb; j++)
        {
            if (arr[i] == brr[j])
            {
                ans.push_back(arr[i]);
            }
        }
    }

    int ans2 = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        int ans3 = ans2 ^ ans[i];
        cout << ans3 << " ";
    }
    // vector<int> arr();

    return 0;
}