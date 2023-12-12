#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 7, 14, 9};

    for (int round = 1; round < arr.size(); round++)
    {
        // fetch element
        int val = arr[round];
        // step 2  compare element
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}