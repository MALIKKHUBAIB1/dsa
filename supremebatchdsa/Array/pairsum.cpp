#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    vector<int> result;
    int sum = 9;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 1; j < arr.size(); j++)
        {
            // cout << element << "," << arr[j] << endl;
            if (element + arr[j] == sum)
            {
                // result.push_back(arr[i]);
                cout << "the sum of these pair " << element << "," << arr[j] << " is :" << sum << endl;
            }
        }
    }

    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }

    return 0;
}