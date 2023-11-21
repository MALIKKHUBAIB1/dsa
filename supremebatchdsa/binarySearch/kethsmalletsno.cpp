#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int kthSmallLarge(vector<int> arr, int n, int k, vector<int> arr2)
{
    sort(arr.begin(), arr.end()); //[1,2,4,5]
    // for largest no
    int ans = n - k + 1;
    int result = k - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        // return {arr[ans]};
        // a = arr[ans];
        // b = arr[result];
        arr2.push_back(arr[ans]);
        arr2.push_back(arr[result]);
    }
}
void printElement(vector<int> arr2)
{
    for (int j = 0; j < arr2.size(); j++)
    {
        // return arr2[j];
        cout << "output is : " << arr2[j];
    }
    // return ans;
}
int main()
{
    vector<int> arr{1, 2, 4, 5};
    vector<int> arr2;
    int n = arr.size() - 1;
    int k = 3;

    int ans = kthSmallLarge(arr, n, k, arr2);
    printElement(arr2);
    // cout << "the output is : " << a << b << endl;
    cout << "the output is : " << ans << endl;

    return 0;
};