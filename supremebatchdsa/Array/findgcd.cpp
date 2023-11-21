#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr{10, 6, 9};
    int maxi = arr[0];
    int mini = arr[0];
    int ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    if (maxi == 0)
    {
        cout << mini << endl;
    }
    if (mini == 0)
    {
        cout << maxi << endl;
    }
    cout << maxi << endl;
    cout << mini << endl;
    while (mini > 0 && maxi > 0)
    {
        if (maxi > mini)
        {
            maxi = maxi - mini;
        }
        else
        {
            mini = mini - maxi;
        }

        // j++;
    }

    if (maxi == 0)
    {
        cout << "mini:" << mini << endl;
    }
    else
    {
        cout << "maxi:" << maxi << endl;
    }

    return 0;
}