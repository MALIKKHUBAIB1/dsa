#include <iostream>
#include <vector>
using namespace std;
int findUniqeEl(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the no : " << endl;
    cin >> n;
    vector<int> arr(n);
    
    // takin input from uaer
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << "Enter the arry no";
        cin >> arr[i];
    }

    int findUniqElemet = findUniqeEl(arr);
    cout << findUniqElemet << endl;
}