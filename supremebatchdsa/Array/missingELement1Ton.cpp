#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findDuplicateELment(vector<int> arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        // visited Method
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    // all postive integer are missing elements

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << endl;
        }
    }
}
int main()
{
    vector<int> arr{1, 3, 3, 3, 5};
    int n = arr.size();
    // findDuplicateELment(arr, n);
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}