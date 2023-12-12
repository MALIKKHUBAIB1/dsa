#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int sum = 0;
    int maxi = arr[0];
    for (int j = 0; j < arr.size(); j++)
    {
        sum = sum + arr[j];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << sum << endl;

    return 0;
}